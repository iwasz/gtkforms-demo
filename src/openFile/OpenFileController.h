/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#ifndef OPEN_FILE_CONTROLLER_H_
#define OPEN_FILE_CONTROLLER_H_

#include <ReflectionParserAnnotation.h>
#include <controller/AbstractController.h>

/**
 *
 */
class __tiliae_reflect__ OpenFileController : public GtkForms::AbstractController {
public:
        OpenFileController () {}
        virtual ~OpenFileController () {}

        virtual GtkForms::ViewsToOpen onStart ();
        void onOk (std::string const &path);
};

#endif /* MainController_H_ */
