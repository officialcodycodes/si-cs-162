#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Shape{
    protected:
        string name;
        string color;
    public:
        // should have constructors, accessors, mutators, as appropriate
        Shape();
        Shape(string, string);
        string get_name();

};

#endif