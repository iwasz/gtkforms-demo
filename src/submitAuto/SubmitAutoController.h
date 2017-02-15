/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#ifndef SUBMIT_AUTO_CONTROLLER_H_
#define SUBMIT_AUTO_CONTROLLER_H_

#include <ReflectionParserAnnotation.h>
#include <controller/AbstractController.h>
#include <string>

class __tiliae_reflect__ SubmitAutoController : public GtkForms::AbstractController {
public:
        SubmitAutoController () {}
        virtual ~SubmitAutoController () {}

        virtual std::string onStart ();
        virtual void onSubmit ();
};

#endif /* SubmitAutoController_H_ */
