// filename.cpp: Ashish Galagali
// Description: .
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr[] = {1,2,3,4,55,123,3,14,12};
    rotate(arr, 3);
    return 0;
}
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        
        for(int i =0 ; i< nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums = temp;
    }
};