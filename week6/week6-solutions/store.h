#ifndef STORE_H
#define STORE_H

#include <iostream>
using namespace std;

class Store{
    private:
        int jackets;
        int shirts;
        int pants;

        int num_brands;
        string* brands;

    public:
        // Default constructor
        Store();

        // Non-default constructor
        Store(int, int, int, int, string*);

        /* The Big 3 */
        ~Store();  // Destructor
        Store& operator=(const Store&); // AOO
        Store(const Store&); // Copy Constructor

        // print function
        void print_store();


};

#endif