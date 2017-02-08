/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#ifndef SUBMIT_TEST1_CONTROLLER_H_
#define SUBMIT_TEST1_CONTROLLER_H_

#include <string>
#include <controller/AbstractController.h>
#include <ReflectionParserAnnotation.h>

class __tiliae_reflect__ SubmitTest1Controller : public GtkForms::AbstractController {
public:
        SubmitTest1Controller () {}
        virtual ~SubmitTest1Controller () {}

        virtual std::string onStart ();
        virtual void onSubmit ();
        virtual void onIdle ();
        virtual void onStop ();
};

#endif /* Submittest1Controller_H_ */
