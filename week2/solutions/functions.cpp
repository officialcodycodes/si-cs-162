#include <iostream>

#include "act1.h"

using namespace std;

void swapPtr(int* a, int* b){
    int temp = *a;
    *a = *b;  // dereference to access raw values
    *b = temp;

    cout << "Difference of a and b: " << (*a)-(*b) << endl;  // should be 1, since 5-4 = 1. We swapped them.
}

void swapRef(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    cout << "Difference of a and b: " << a-b << endl;  // should be 1, since 5-4 = 1. We swapped them.

}
