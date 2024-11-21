#include "circle.h"
#include "rectangle.h"
#include "shape.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Create a Shapes vector (if Shapes is an Abstract class, what do we do?)
    vector<Shape*> shapes;
    
    // Add both a Circle and Rectangle to the vector
    Circle c(5, "Circle");
    Rectangle r(3, 4, "Rectangle");

    shapes.push_back(&c);
    shapes.push_back(&r);

    // Iterate through the vector and print the name/area of each shape
    for(int i = 0; i < shapes.size(); i++){
        cout << "Name: " << shapes[i]->get_name() << endl;
        cout << "Area: " << shapes[i]->get_area() << endl;
    }

}