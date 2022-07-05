// filename.cpp: Ashish Galagali
// Description: .

#include<iostream>
using namespace std;

int calSumUtil(int a[], int b[], int n, int m){
    int sum[n];
    int i = n-1;
    int j = m-1;
    int k = n-1;

    int carry = 0, s = 0;
     
     while (j>=0)
     {
        s= a[i] + b[j] +carry;
        sum[k] = (s%10);

        carry = s/10;
        k--;
        i--;
        j--;
     }
     while (i >= 0)
     {
        s = a[i] + carry;
        sum[k] = (s%10);
        carry = s/10;

        i--;
        k--;
     }
     int ans =0;
     if (carry)
     {
        ans = 10;
     }
     for (int i = 0; i < n-1; i++)
     {
        ans+= sum[i];
        ans*=10;
     }
     
     return ans/10;
     
}

int calSum(int a[], int b[], int n, int m) {
    if (n>=m)
    {
        return calSumUtil(a,b,n,m);
    }
    else
        return calSumUtil(b,a,m,n);
}

int main()
{
    int a[] = { 9, 3, 9 };
    int b[] = { 6, 1 };
 
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
 
    cout << calSum(a, b, n, m) << endl;
    return 0;
}