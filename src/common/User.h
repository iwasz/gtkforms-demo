#ifndef USER_H
#define USER_H

#include <ReflectionParserAnnotation.h>
#include <string>
#include <vector>

struct __tiliae_reflect__ User {

        std::string toString () const;

        std::string firstname;
        std::string lastname;
        int age;
        std::string occupation;
        bool happy;
};

typedef __tiliae_reflect__ std::vector <User *> UserVector;

#endif // USER_H
