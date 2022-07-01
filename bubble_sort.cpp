// bubble_sort.cpp: Ashish Galagali
// Description: Bubble sort 
#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n - i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }   
    }
} 

void printArray(int arr[], int n){
    int i;
    for (i = 0; i < n; i++)
    {   
        cout<< arr[i] << " ";  
    }
}

int main()
{
    int arr[] ={5, 1, 4, 6, 7};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr ,N);
    cout<<"Sorted array :" <<endl;
    printArray(arr, N);
    return 0;
}
