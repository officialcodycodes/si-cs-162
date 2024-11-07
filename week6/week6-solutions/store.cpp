#include "store.h"

#include <iostream>
using namespace std;

// Default constructor
Store::Store(){
    this->jackets = 0;
    this->shirts = 0;
    this->pants = 0;

    this->num_brands = 0;
    this->brands = NULL;
}

// Non-default constructor
Store::Store(int j, int s, int p, int num_brands, string* brands){
    this->jackets = j;
    this->shirts = s;
    this->pants = p;

    this->num_brands = num_brands;
    this->brands = new string [num_brands];

    // Initialize the brands array
    for(int i = 0; i < num_brands; i++){
        this->brands[i] = brands[i];
    }

}

/* The Big 3 */
Store::~Store(){  // Destructor
    if(this->brands != NULL){
        delete [] this->brands;
        this->brands = NULL;
    }
}

Store& Store::operator=(const Store& s){ // AOO

    // member-wise copy
    this->jackets = s.jackets;
    this->shirts = s.shirts;
    this->pants = s.pants;
    this->num_brands = s.num_brands;

    // free memory
    if(this->brands != NULL){
        delete [] this->brands;
    }

    // Now that you freed the old memory, you can DEEP COPY
    // Use the number of books var in the class definition
    this->brands = new string [this->num_brands];

    for(int i = 0; i < this->num_brands; i++){
        this->brands[i] = s.brands[i];
    }

    return *this;

}

Store::Store(const Store& s){ // Copy Constructor
    // member-wise copy
    this->jackets = s.jackets;
    this->shirts = s.shirts;
    this->pants = s.pants;
    this->num_brands = s.num_brands;

    // Deep Copy
    this->brands = new string [this->num_brands];
    for(int i = 0; i < this->num_brands; i++){
        this->brands[i] = s.brands[i];
    }
    
    
}

// If you have time... make a function that prints out the store's inventory
void Store::print_store(){
    cout << "Brands: " << endl;
    for(int i = 0; i < this->num_brands; i++){
        cout << this->brands[i] << ", ";
    }
    cout << endl << "-----------------------------------" << endl;
    
    cout << "Jackets: " << this->jackets << endl;
    cout << "Shirts: " << this->shirts << endl;
    cout << "Pants: " << this->pants << endl;
    
}