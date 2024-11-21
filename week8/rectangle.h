#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

#include <iostream>
#include <string>

class Rectangle : public Shape {
    private:
        float length;
        float width;
        
    public:
        Rectangle();
        Rectangle(float, float, string);

        float get_length();
        float get_width();
        string get_name(); // TODO: implement this

        void set_length(float);
        void set_width(float);
        void set_name(string);

        void get_area();  // TODO: implement this
};

#endif