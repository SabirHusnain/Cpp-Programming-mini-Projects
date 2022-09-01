#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     float area, r;
     cout << "Enter radius of circle: ";
     cin >> r;
     cout << "Area of circle with radius " << r << " is: " << 3.14159 * r * r;
     getch();
     return 0;
}