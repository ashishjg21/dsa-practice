// filename.cpp: Ashish Galagali
// Description: 371 = (3*3*3)+(7*7*7)+(1*1*1)    
// where:    
// (3*3*3)=27    
// (7*7*7)=343    
// (1*1*1)=1    
// So:    
// 27+343+1=371 
#include<iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, temp;
    cout<< " enter the number:"<<endl;
    cin >> n;
    temp = n;
    while (n>0)
    {
        r = n%10;
        sum = sum +(r*r*r);
        cout<< sum<<endl;
        n = n/10;   
    }
    if (temp==sum)
    {
        cout <<"armstrong"<<endl;
    }
    else {
        cout << "not armstrong" << endl;
    }
    
    return 0;
}