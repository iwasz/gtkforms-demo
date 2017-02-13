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

void MainController::onRowActivated (std::string const &controllerName)
{
        if (!controllerName.empty ()) {
                if (controllerName != "otherMainController") { // hack
                        open (controllerName);
                }
                else {
                        replace (controllerName);
                }
        }
}
