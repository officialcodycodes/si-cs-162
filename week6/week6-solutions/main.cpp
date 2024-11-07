#include "store.h"

#include <iostream>
using namespace std;

int main(){
    /* 
     * You will use this array to initialize the brands array 
     * in the non-default constructor 
    */
    string brands[5] = {"Nike", "Lululemon", "Levi's", "H&M", "Adidas"};

    // Create two Store objects, using both constructors
    Store s1;
    Store s2(10, 20, 30, 5, brands);

    // Use the AOO to assign the first object to the second object
    s1 = s2;

    // Use the CC to create a third object from the first object
    Store s3 = s1;
    
    /* IF YOU HAVE TIME... make a function that prints the 3rd store's inventory */
    s3.print_store();

    return 0;
}