/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#include "submitAuto/SubmitAutoController.h"
#include "common/User.h"
#include <App.h>
#include <Logging.h>

static src::logger_mt &lg = logger::get ();

GtkForms::ViewsToOpen SubmitAutoController::onStart()
{
        set ("model", Core::Variant (std::make_shared<User> ()));
        set ("model1", Core::Variant (std::make_shared<User> ()));
        refresh ("");
        return "submitAutoView";
}

/*
 * Po konwersji wykonuje się metoda IController::onSubmit:
 */
void SubmitAutoController::onSubmit ()
{
        Ptr<User> user = vcast<Ptr<User>> (get ("model"));
        set ("summary", Core::Variant (user->toString ()));

        user = vcast<Ptr<User>> (get ("model1"));
        set ("summary1", Core::Variant (user->toString ()));

        refresh ("");
}
