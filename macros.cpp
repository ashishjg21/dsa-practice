//C++ program to illustrate macros
#include <iostream>
using namespace std;
 
// Macro definition
#define AREA(l, b) (l * b)
 
#define ELE 1, \
            2, \
            3
 
#define min(a, b) (((a) < (b)) ? (a) : (b))
 
int main()
{
    // Given lengths l1 and l2
    int l1 = 10, l2 = 5, area;
 
    // Find the area using macros
    area = AREA(l1, l2);
 
    // Print the area
    cout << "Area of rectangle"
         << " is: "<<
        area <<endl;

    int arr[] = { ELE };
 
    // Print elements
    printf("Elements of Array are:\n");
 
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << ' ';
    }

    int a = 18;
    int b = 76;
    cout << endl;

    cout << "Minimum value between "
         << a << " and " << b
         << " is: " << min(a, b);
    return 0;
}