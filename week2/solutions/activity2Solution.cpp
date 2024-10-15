// Week 2 Review
#include <iostream>

using namespace std;

/* Why is this void? */
void initArray(int array[], int size){
    for(int i = 0; i < size; i++){
        // 1st condition
        if(i == 0)
            array[i] = 0;
        else
            array[i] = 2 + array[i-1];
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << ", ";
    }
    cout << endl;
}


void dynArray(int* array, int size){
    for(int i = 0; i < size; i++){
        // 1st condition
        if(i == 0){
            array[i] = 0;
            cout << array[i] << ", ";
        }
        else{
            array[i] = 2 + array[i-1];
            cout << array[i] << ", ";
        }
    }
    cout << endl;
}


int main(){

    /* Given an array, initialize it in initArray() so each index's value is 2 plus the previous index's value. */
    /* Ex: 0, 2, 4... */
    int array[10];

    initArray(array, 10);

    /* Print the array's values in printArray()*/
    printArray(array, 10);


    /* If we have time... how does this look with a dynamic array? Why would we want this? */
    /* Can you also print inside that same function? */

    /*1st: get the size from the user: */
    int size = -1;
    cout << "Enter size: ";
	cin >> size;

    int* dynamic = new int[size];
    dynArray(dynamic, size);

    /* Don't forget to FREE the memory.*/
    delete [] dynamic;
    dynamic = NULL;

    return 0;
}