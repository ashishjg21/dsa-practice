// filename.cpp: Ashish Galagali
// Description: sort using recursion

#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>& v,int temp)
{
    if(v.size() == 0 || v[v.size()-1] <= temp){
        v.push_back(temp);
        return;
    }else if(v[0] >= temp){
        v.insert(v.begin(),temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,val);
    return;
}

void sort(vector<int>& arr)
{
    if(arr.size() == 1){
        return;
    }
    int temp = arr[arr.size() -1];
    arr.pop_back();
    sort(arr);
    insert(arr,temp);
}

int main(){
    vector<int> arr = {3,2,4,5,10,1};
    sort(arr);
    for(int i=0;i< arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}