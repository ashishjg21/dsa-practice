// Minimum Deletions.cpp: Ashish Galagali
// Description: min

//Example 1:
// Input: s = "aab"
// Output: 0
// Explanation: s is already good.
// Example 2:

// Input: s = "aaabbbcc"
// Output: 2
// Explanation: You can delete two 'b's resulting in the good string "aaabcc".
// Another way it to delete one 'b' and one 'c' resulting in the good string "aaabbc".
//
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
    
