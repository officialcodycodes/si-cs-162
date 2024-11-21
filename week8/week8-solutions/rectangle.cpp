#include "rectangle.h"

#include <iostream>
#include <string>

using namespace std;

// default constructor
Rectangle::Rectangle(){
    this->length = 1;
    this->width = 1;
}

// non-default constructor
Rectangle::Rectangle(float l, float w, string n){
    this->length = l;
    this->width = w;
    this->name = n;
}

float Rectangle::get_length(){
    return this->length;
}

float Rectangle::get_width(){
    return this->width;
}

void Rectangle::set_name(string n){
    this->name = n;
}

/* TODO: view Rectangle.h to see what functions to implement
 * ...
 */

string Rectangle::get_name(){
    return this->name;
}

float Rectangle::get_area(){
    return this->length * this->width;
}