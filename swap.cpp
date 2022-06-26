// swap.cpp: Ashish Galagali
// Description: swapping alternate numbers in array

#include<iostream>
#include <array>
using namespace std;

void printArray(int a[]) {
    for(int i = 0; i<= sizeof(a); i++ ) {
        cout<< a[i] <<" ";
    }cout<<endl;
}

void swapAlt(int a[]) {
    for (int i = 0; i < sizeof(a); i+=2) {
        if (i+1 < sizeof(a)){
            // swap(a[i], a[i+1]);
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }   
    }   
}    
    
int main() {
    int nums[] = {1,2,3,4,5,6,7,8,9};
    swapAlt(nums);
    printArray(nums);
    return 0;
}        
    
