/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#include "addNode/AddNodeController.h"
#include "common/User.h"
#include <App.h>
#include <Logging.h>
#include <unistd.h>

#include <gtk/gtk.h>
#include <view/AbstractView.h>

static src::logger_mt &lg = logger::get ();

std::string AddNodeController::onStart ()
{
        set ("nodeCategories", Core::Variant (nodeCategories));
        refresh ("");
        return "addNodeView";
}

/*
 * Po konwersji wykonuje się metoda IController::onSubmit:
 */
void AddNodeController::onSubmit ()
{
        //        Ptr<User> user = vcast<Ptr<User>> (get ("model"));
        //        set ("summary", Core::Variant (user->toString ()));
        //        refresh ("");
}

/*****************************************************************************/

void AddNodeController::onRowActivated (Core::Variant const &row)
{
        if (row.isNone () || row.isNull ()) {
                return;
        }

        //        void const *rawRow = vcast<void const *> (row);
        //        Demo const *demo = static_cast<Demo const *> (rawRow);

        //        if (demo->replace) {
        //                replace (demo->controllerName);
        //        }
        //        else {
        //                open (demo->controllerName);
        //        }
}

/*****************************************************************************/

void AddNodeController::onRowSelected (Core::Variant const &row)
{
        if (row.isNone () || row.isNull ()) {
                return;
        }

        //        void const *rawRow = vcast<void const *> (row);
        //        Demo const *demo = static_cast<Demo const *> (rawRow);
        //        currentSelection = demo->name;

        //        set ("description", Core::Variant (demo->description));
        //        refresh ("description");
}

/*****************************************************************************/

void AddNodeController::onOk ()
{

}
