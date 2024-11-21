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
        virtual string get_name() const = 0;
        virtual double get_area() const = 0;
};

#endif