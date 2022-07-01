//  op_bubble_sort.cpp: Ashish Galagali
//  Description: Optimized Implementation of Bubble Sort: 
//  The above function always runs O(n^2) time even if the array is sorted.
//  It can be optimized by stopping the algorithm if the inner loop didn’t cause any swap. 
#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    for ( i = 0; i < n-1; i++)
    {
        swapped = false;
        for ( j = 0; j < n-i-1; j++)
        {
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped= true;    
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}


/*
    NOT TO BE CONFUSED 
if i --> 0  -->n-1
    j--> 0  -->n-i-1
if i --> 1  -->n
    j--> 0 -->n-i

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}
*/
void printArray(int arr[], int size){
    int i;
    for ( i = 0; i <size; i++)
    {
        cout<<" "<< arr[i]; 
    }
    
}

int main()
{
    int arr[] = {1,2,3,4,55,123,3,14,12};
    int N = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, N);
    cout<< "Sorted array"<<endl;
    printArray(arr,N);
    return 0;
}