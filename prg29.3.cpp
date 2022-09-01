#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a;
     int *ptr;
     cout << "Enter a number: ";
     cin >> a;
     ptr = &a;
     cout << "Address of a is: " << ptr << endl;
     cout << "Value of a is: " << *ptr << endl;
     getch();
     return 0;
}