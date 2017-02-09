/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#ifndef COMPUTERGEAR_H
#define COMPUTERGEAR_H

#include <ReflectionParserAnnotation.h>
#include <string>
#include <vector>

struct __tiliae_reflect__ Certificate {
        std::string name;
        int icon = 2;
        bool priceVisible = false;
        bool availableVisible = false;
};

typedef __tiliae_reflect__ std::vector<Certificate *> CertificateVector;

struct __tiliae_reflect__ Peripheral {
        std::string name;
        std::string desc;
        int icon = 1;
        bool priceVisible = false;
        bool availableVisible = true;
        CertificateVector certificates;
        bool available = true;
};

typedef __tiliae_reflect__ std::vector<Peripheral *> PeripheralVector;

struct __tiliae_reflect__ Computer {
        std::string name;
        std::string desc;
        int icon = 0;
        int price = 0;
        bool priceVisible = true;
        bool availableVisible = true;
        PeripheralVector peripherals;
        bool available = true;
};

typedef __tiliae_reflect__ std::vector <Computer *> ComputerVector;

#endif // COMPUTERGEAR_H
