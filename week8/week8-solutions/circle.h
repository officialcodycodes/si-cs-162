#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

// Circle is inherited from Shape
class Circle : public Shape {
    private:
        float radius;
    public:
        Circle();
        Circle(float, string);

        // accessors
        float get_radius();
        string get_name();  // TODO: implement this

        // mutators
        void set_radius(float);
        void set_name(string);


        // other
        float get_area(); // TODO: implement this
};

#endif