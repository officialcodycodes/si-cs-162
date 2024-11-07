#include "shape.h"

#include <iostream>
#include <string>
using namespace std;

/* Default & non-default constructors, destructor, accessors, mutators, 
and area() function*/

Shape::Shape(){
    this->name = NULL;
    this->color = NULL;
}

Shape::Shape(string name, string color){
    this->name = name;
    this->color = color;
}

Shape::~Shape(){
    this->name = NULL;
    this->color = NULL;
}

string Shape::get_name() const{
    return this->name;
}