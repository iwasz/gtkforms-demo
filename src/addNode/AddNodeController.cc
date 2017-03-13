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

static src::logger_mt &lg = logger::get ();

GtkForms::ViewsToOpen AddNodeController::onStart()
{
        set ("nodeCategories", Core::Variant (nodeCategories));
        refresh ("");
        return "addNodeView";
}

/*
 * Po konwersji wykonuje się metoda IController::onSubmit:
 */
void AddNodeController::onSubmit () { refresh ("nodesList", "filter"); }

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
                set ("description", Core::Variant ());
                refresh ("description");
                set ("imagePath", Core::Variant ());
                refresh ("imageDesc");
                return;
        }

        void const *rawRow = vcast<void const *> (row);
        NodeMeta const *node = static_cast<NodeMeta const *> (rawRow);

        set ("description", Core::Variant (node->description));
        refresh ("description");
        set ("imagePath", Core::Variant (node->imagePath));
        refresh ("imageDesc");
}

/*****************************************************************************/

void AddNodeController::onOk () {}
