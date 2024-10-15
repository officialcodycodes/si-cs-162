// Week 1 Review
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



int main(){

    /* declare two ints, initialize to 4 and 5 */
    int a = 4, b = 5;

    /* output original values */
    cout << "ORIGINAL VALUES: a = " << a << ", b = " << b << endl;

    /* use Pointers in swapPtr() to swap values and print out their product */
    swapPtr(&a, &b);
    
    /* Print out new swapped values after swapPtr().  Are they different? */
    cout << "NEW VALUES: a = " << a << ", b = " << b << endl;
    
    cout << "----------------------------------------------------" << endl;
    
    /* RESET VALUES. Now do the same again, but using pass by Reference */
    a = 4, b = 5;

    cout << "ORIGINAL VALUES: a = " << a << ", b = " << b << endl;
    swapRef(a, b);
    cout << "NEW VALUES: a = " << a << ", b = " << b << endl;


    /* Discuss with your partner, what differences did you notice between the two methods? */

    return 0;
}