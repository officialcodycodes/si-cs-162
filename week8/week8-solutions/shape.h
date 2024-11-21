#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

using namespace std;

class Shape {
    protected:
        string name;
    public:
        // pure virtual functions
        virtual string get_name() = 0;
        virtual float get_area() = 0;
};

#endif