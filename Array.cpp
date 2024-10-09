#include <iostream>
#include <vector>
int main(){
    int purchases[23];
    int largePurchases[] = {2341, 23321, 12321, 123456};
    //to get size of array
    int sizeOfLargePurchases = sizeof(largePurchases)/sizeof(int);
    for(int i=0; i<sizeof(largePurchases)/sizeof(int); i++){}
    for(int largePurchase: largePurchases){}
    //arraylist
    std::vector<int> arrayListVar;
    //multi-demensional arrays
    int dates[][3] = {{1, 2, 3},{31, 32, 33}}; //compiler assumes number of rows 
}