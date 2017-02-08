/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#ifndef TREE_VIEW1_CONTROLLER_H_
#define TREE_VIEW1_CONTROLLER_H_

#include "common/User.h"
#include <controller/AbstractController.h>

class __tiliae_reflect__ TreeView1Controller : public GtkForms::AbstractController {
public:
        virtual ~TreeView1Controller () {}

        virtual std::string onStart ();

        UserVector &getUsers () { return users; }
        void setUsers (const UserVector &value) { users = value; }

private:
        UserVector users;
};

#endif /* TreeView1Controller_H_ */
