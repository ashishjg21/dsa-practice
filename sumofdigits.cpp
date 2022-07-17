// filename.cpp: Ashish Galagali
// Description: .
#include <iostream>  
using namespace std;  
int main()  
{  
    int n,sum=0,m;  
    

    int a(1.2);
    cout<< a << endl;  
    int b = 1.23123;
    cout<< b << endl;




    cout<<"Enter a number: ";    
    cin>>n;    
    while(n>0)    
    {    
        m=n%10;    
        sum=sum+m;  
        /*
        for each digit to perform some action
        here goes the code.
        */
        n=n/10;    
    }    
    cout<<"Sum is= "<<sum<<endl;    
    return 0;  
}  