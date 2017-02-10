/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#ifndef FLORAFAUNAH_H
#define FLORAFAUNAH_H

#include <ReflectionParserAnnotation.h>
#include <string>
#include <vector>

struct Animal;

typedef __tiliae_reflect__ std::vector <Animal *> AnimalVector;

struct __tiliae_reflect__ Animal {
        std::string name;
        int rating;
        bool predator;
        AnimalVector friends;
};

#endif // FLORAFAUNAH_H
