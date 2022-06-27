// filename.cpp: Ashish Galagali
// Description: deci-binary number --> Minimum Deci-Binary numbers required
//                                     to obtain a given sum S
#include <iostream>

using namespace std;

int minPartitions(string s){
    int m = INT_MIN;
    
    for (int i = 0; i < s.size(); i++){
        int temp = s[i] - '0';
        if (temp > m){
            m = temp;
        }
    }
    return m;
}

int main() {
    string S = "32";
    cout<< minPartitions(S);
    return 0;
}