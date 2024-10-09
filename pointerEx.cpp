#include <iostream>
using namespace std;

// Pass by reference
void modifyValueByReference(int &refVar) {
    refVar += 10; 
}

// Pass by value
void modifyValueByValue(int value) {
    value += 10; 
}

int main() {
    // Stack allocation (variables that will be destroyed when out of scope)
    int x = 5;
    int y = 5;
    
    int* ptrX = &x;  // stores the address of x
    int* ptrY = &y;  // stores the address of y
    
    cout << "Before modification, x = " << x << ", y = " << y << endl;

    // Passing by reference vs passing by value
    modifyValueByReference(x); // x will be modified
    modifyValueByValue(y);      // y will remain unchanged
    
    cout << "After passing by reference, x = " << x << endl;  
    cout << "After passing by value, y = " << y << endl;      

    // Multiple variables pointing to the same address
    int& refX = x;  // reference to x
    refX = 20;      // Changing refX changes x aswell
    cout << "After modifying refX, x = " << x << endl;

    // Heap allocation
    int* heapVar = new int;  //allocate 4 bytes of memory on the heap(long term that dosent die unless delete keyword used or code ends)
    *heapVar = 100;
    cout << "Value stored in heap memory: " << *heapVar << endl;

    delete heapVar;

    return 0;
}
