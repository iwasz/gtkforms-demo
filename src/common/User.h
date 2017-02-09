#ifndef USER_H
#define USER_H

#include <ReflectionParserAnnotation.h>
#include <string>
#include <vector>

struct User;

typedef __tiliae_reflect__ std::vector <User *> UserVector;

struct __tiliae_reflect__ User {

        std::string toString () const;

        std::string firstname;
        std::string lastname;
        std::string occupation;
        int age;
        bool happy;
        UserVector friends;
};


#endif // USER_H
