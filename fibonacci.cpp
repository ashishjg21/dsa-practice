// filename.cpp: Ashish Galagali
// Description: .
#include<iostream>
#include<math.h>

//comepetetive way

using namespace std;

void fibonacci (){
    return; 
}

// binets master formaula for finding fibonacci number directly in O(n)

int main()
{
    int N = 10;
    double phi = (sqrt(5) + 1) / 2;     
    double result =  round(pow(phi, N) / sqrt(5));
    cout << result << endl;
}

