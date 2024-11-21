#include "rectangle.h"

#include <iostream>
#include <string>

using namespace std;

// default constructor
Rectangle::Rectangle(){
    this->length = 1;
    this->width = 1;
    this->name = "Rectangle";
}

// non-default constructor
Rectangle::Rectangle(float l, float w, string n){
    this->length = l;
    this->width = w;
    this->name = n;
}

// Accessors
float Rectangle::get_length(){
    return this->length;
}

float Rectangle::get_width(){
    return this->width;
}

// Mutators
void Rectangle::set_length(float l){
    this->length = l;
}

void Rectangle::set_width(float w){
    this->width = w;
}

void Rectangle::set_name(string n){
    this->name = n;
}

/* TODO: view Rectangle.h to see what functions to implement
 * ...
 */