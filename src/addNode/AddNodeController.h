/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#ifndef ADD_NODE_CONTROLLER_H_
#define ADD_NODE_CONTROLLER_H_

#include <ReflectionParserAnnotation.h>
#include <controller/AbstractController.h>
#include <string>
#include <vector>

struct __tiliae_reflect__ NodeMeta {
        std::string name;
        std::string description;
        std::string imagePath;
};

typedef __tiliae_reflect__ std::vector<NodeMeta *> NodeMetaVector;

/**
 * Demos are groupped in categories.
 */
struct __tiliae_reflect__ NodeMetaCategory {
        std::string name;
        std::string description;
        NodeMetaVector nodes;
};

typedef __tiliae_reflect__ std::vector<NodeMetaCategory *> NodeMetaCategoryVector;

/**
 * @brief The MainController class
 */
class __tiliae_reflect__ AddNodeController : public GtkForms::AbstractController {
public:
        AddNodeController () {}
        virtual ~AddNodeController () {}

        virtual std::string onStart ();
        virtual void onSubmit ();
        void onRowActivated (const Core::Variant &row);
        void onRowSelected (const Core::Variant &row);
        void onOk ();

        NodeMetaCategoryVector nodeCategories;

private:
        std::string currentSelection;
};

#endif /* MainController_H_ */
