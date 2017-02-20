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
        bool replace = false; /// $controller.replace or $controller.open?
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

/**
 * @brief The MainController class
 */
class __tiliae_reflect__ MainController : public GtkForms::AbstractController {
public:
        MainController () {}
        virtual ~MainController () {}

        virtual std::string onStart ();
        virtual void onSubmit ();
        void onRowActivated (const Core::Variant &row);
        void onRowSelected (const Core::Variant &row);
        void onOpenDirectory ();
        void onKeyPress (unsigned int key);

        DemoCategoryVector demoCategories;

private:
        std::string currentSelection;
};

#endif /* MainController_H_ */
