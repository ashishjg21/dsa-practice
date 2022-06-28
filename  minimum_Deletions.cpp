// Minimum Deletions.cpp: Ashish Galagali
// Description: .
#include <iostream>

using namespace std;

void sortString(string &str){
    sort(str.begin(), str.end());
    cout<<str;
}    

int main(){
    string s = "caaabb";
    sortString(s);
    return 0;
}    
    
