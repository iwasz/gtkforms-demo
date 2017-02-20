/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#include "main/MainController.h"
#include "common/User.h"
#include <App.h>
#include <Logging.h>
#include <unistd.h>

static src::logger_mt &lg = logger::get ();

std::string MainController::onStart ()
{
        set ("model", Core::Variant (demoCategories));
        refresh ("");
        return "mainView";
}

/*
 * Po konwersji wykonuje się metoda IController::onSubmit:
 */
void MainController::onSubmit ()
{
        //        Ptr<User> user = vcast<Ptr<User>> (get ("model"));
        //        set ("summary", Core::Variant (user->toString ()));
        //        refresh ("");
}

/*****************************************************************************/

void MainController::onRowActivated (Core::Variant const &row)
{
        if (row.isNone () || row.isNull ()) {
                return;
        }

        void const *rawRow = vcast<void const *> (row);
        Demo const *demo = static_cast<Demo const *> (rawRow);

        if (demo->replace) {
                replace (demo->controllerName);
        }
        else {
                open (demo->controllerName);
        }
}

/*****************************************************************************/

void MainController::onRowSelected (Core::Variant const &row)
{
        if (row.isNone () || row.isNull ()) {
                return;
        }

        void const *rawRow = vcast<void const *> (row);
        Demo const *demo = static_cast<Demo const *> (rawRow);
        currentSelection = demo->name;

        set ("description", Core::Variant (demo->description));
        refresh ("description");
}

/*****************************************************************************/

void MainController::onOpenDirectory ()
{
        if (currentSelection.empty ()) {
                return;
        }

        char cwd[1024];
        getcwd (cwd, sizeof (cwd));

        std::string uri = "file:///" + std::string (cwd) + "/src/" + currentSelection;

        GError *error = NULL;
        if (!g_app_info_launch_default_for_uri (uri.c_str (), NULL, &error)) {
                BOOST_LOG (lg) << "Failed to open uri : " << error->message;
        }
}

/*****************************************************************************/

void MainController::onKeyPress (unsigned int key)
{
        BOOST_LOG (lg) << "Key pressed : [" << key << "]";
        if (key == GDK_KEY_a) {
                open ("infoController");
        }
}
