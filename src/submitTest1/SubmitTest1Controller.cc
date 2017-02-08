/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#include "submitTest1/SubmitTest1Controller.h"
#include "common/User.h"
#include <App.h>
#include <Logging.h>

static src::logger_mt &lg = logger::get ();

std::string SubmitTest1Controller::onStart ()
{
        Ptr<User> user = std::make_shared<User> ();
        user->firstname = "bla";
        user->happy = true;
        set ("model", Core::Variant (user));
        set ("summary", Core::Variant ("Hello world"));

        refresh ("");
        return "submitTest1View";
}

/*
 * Po konwersji wykonuje się metoda IController::onSubmit:
 */
void SubmitTest1Controller::onSubmit ()
{
        Ptr<User> user = vcast<Ptr<User>> (get ("model"));
        set ("summary", Core::Variant (user->toString ()));
        refresh ("");

        //        if (!user) {
        //                BOOST_LOG (lg) << "Login failed";
        //                setToFlashScope ("loginStatus", Core::Variant ("Błąd logowania"));
        //                app->refresh ("", "loginStatus");
        //                return "";
        //        } else {
        //                BOOST_LOG (lg) << "Logged as : [" << user->name << "]";
        //                setToSessionScope ("loggedUser", Core::Variant (user));
        //                getApp ()->start ("search");
        //                return "";
        //        }
}

/****************************************************************************/

void SubmitTest1Controller::onStop () {}

/****************************************************************************/

void SubmitTest1Controller::onIdle ()
{
        //        enum Status { UNKNOWN, OPENED, CLOSED };
        //        static Status lastStatus = UNKNOWN;
        //        Status newStatus = UNKNOWN;

        //        if (usbService->isOpened ()) {
        //                setToUnitScope ("usbIcon", Core::Variant ("gtk-yes"));
        //                newStatus = OPENED;
        //        }
        //        else {
        //                setToUnitScope ("usbIcon", Core::Variant ("gtk-no"));
        //                newStatus = CLOSED;
        //        }

        //        if (lastStatus != newStatus) {
        //                boost::posix_time::ptime now = boost::posix_time::second_clock::local_time ();
        //                setToUnitScope ("currentTime", Core::Variant (now));
        //        }

        //        lastStatus = newStatus;

        //        app->refresh ("", "usbIcon");
        //        app->refresh ("", "currentTime");
}
