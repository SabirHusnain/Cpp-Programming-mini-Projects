#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a;
     cout << "Enter a number: ";
     cin >> a;
     int *ptr = &a;
     cout << "Value of a is: " << a << endl;
     *ptr = *ptr + 10;
     cout << "New value of a is (a+10): " << *ptr;
     getch();
     return 0;
}