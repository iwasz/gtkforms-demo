/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#include "TreeView1Controller.h"

std::string TreeView1Controller::onStart ()
{
        set ("myModel", Core::Variant (getUsers ()));
        refresh ("");
        return "treeView1View";
}
