// filename.cpp: Ashish Galagali
// Description: .
#include<iostream>

using namespace std;

class Solution {
public:
    void rotate(int nums[], int k) {
        int temp[4];
        
        for(int i =0 ; i< 4; i++){
            temp[(i+k)%4] = nums[i];
        }
        nums = temp;
        cout << nums;
    }
};

int main()
{
    Solution ob; 
    int arr[4] = {12,3,412,13};
    ob.rotate(arr, 3);
    return 0;
}

