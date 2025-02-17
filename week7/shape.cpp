#include "shape.h"

#include <iostream>
#include <string>
using namespace std;

/* Default & non-default constructors, destructor, accessors, mutators, 
and area() function*/

Shape::Shape(){
    this->name = "shape";
    this->color = "red";
}

Shape::Shape(string name, string color){
    this->name = name;
    this->color = color;
}

string Shape::get_name(){
    return this->name;
}