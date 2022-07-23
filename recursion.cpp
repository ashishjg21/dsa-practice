/*
recursion -2 things mandatory 
1. base case --> return statement is must
2. recursion relation 
*/

// filename.cpp: Ashish Galagali
// Description: .
#include<iostream>
using namespace std;

void print(int N){
    if(N == 1){
        cout<< N << " ";
        return; 
    }
    cout<< N << " ";
    print(N-1);
    cout<< N << " ";
}

int main(){
    int N;
    cout<<"till where to print"<<endl;
    cin>>N;
    print(N);
}