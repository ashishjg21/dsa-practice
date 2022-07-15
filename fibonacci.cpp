// filename.cpp: Ashish Galagali
// Description: .
#include<iostream>
#include<math.h>

//comepetetive way
using namespace std;
int main()
{

    int N = 10;
    double phi = (sqrt(5) + 1) / 2;     
    double result =  round(pow(phi, N) / sqrt(5));
    cout << result << endl;
}

