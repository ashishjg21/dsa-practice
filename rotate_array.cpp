// filename.cpp: Ashish Galagali
// Description: .
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        
        for(int i =0 ; i< nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums = temp;
        return nums;
    }
};

int main()
{
    Solution ob; 
    vector <int> arr;
    // vector<int> arr = {1,2,3,4,55,123,3,14,12};
    arr.push_back(35);
    arr.push_back(12);
    arr.push_back(31);
    arr.push_back(100);
    cout << ob.rotate(arr, 3);
    return 0;
}
