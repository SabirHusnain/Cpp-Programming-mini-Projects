#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a = 10, b = 20;
     int sum = a+b;
     cout << "Sum is: " << sum << endl;
     cout << "Address of a is: " << &a << endl;
     cout << "Address of b is: " << &b << endl;
     cout << "Address of sum is: " << &sum << endl;
     getch();
     return 0;
}