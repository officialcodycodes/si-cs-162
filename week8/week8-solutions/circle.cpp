#include "circle.h"

#include <iostream>
#include <math.h>

using namespace std;

// default constructor
Circle::Circle(){
    this->radius = 1;
}

// non-default constructor
Circle::Circle(float r, string n){
    this->radius = r;
    this->name = n;
}

float Circle::get_radius(){
    return this->radius;
}

void Circle::set_radius(float r){
    this->radius = r;
}

void Circle::set_name(string n){
    this->name = n;
}

/* TODO: view Circle.h to see what functions to implement
 * ...
 */

string Circle::get_name(){
    return this->name;
}

float Circle::get_area(){
    return M_PI * pow(this->radius, 2);
}

