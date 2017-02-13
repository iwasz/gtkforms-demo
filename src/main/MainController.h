/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#ifndef MAIN_SUPER_MAIN_CONTROLLER_H_
#define MAIN_SUPER_MAIN_CONTROLLER_H_

#include <ReflectionParserAnnotation.h>
#include <controller/AbstractController.h>
#include <string>
#include <vector>

struct __tiliae_reflect__ Demo {
        std::string name;
        std::string description;
        std::string controllerName;
        std::string directory;
};

typedef __tiliae_reflect__ std::vector<Demo *> DemoVector;

/**
 * Demos are groupped in categories.
 */
struct __tiliae_reflect__ DemoCategory {
        std::string name;
        std::string description;
        DemoVector demos;
};

typedef __tiliae_reflect__ std::vector<DemoCategory *> DemoCategoryVector;

class __tiliae_reflect__ MainController : public GtkForms::AbstractController {
public:
        MainController () {}
        virtual ~MainController () {}

        virtual std::string onStart ();
        virtual void onSubmit ();
        void onRowActivated (std::string const &controllerName);

        DemoCategoryVector demoCategories;
};

#endif /* MainController_H_ */
