#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a, b, c;
     int *p1 = &a, *p2 = &b, *p3 = &c;
     cout << "Enter value of a: ";
     cin >> *p1;
     cout << "Enter value of b: ";
     cin >> *p2;
     cout << "Enter value of c: ";
     cin >> *p3;
     cout << "Value of a: " << *p1 << endl;
     cout << "Value of b: " << *p2 << endl;
     cout << "Value of c: " << *p3 << endl;
     getch();
     return 0;
}