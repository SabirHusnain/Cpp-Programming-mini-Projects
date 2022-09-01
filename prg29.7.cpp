#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a = 10;
     float b = 25.18;
     char c = '$';
     void *ptr = &a;
     cout << "Value of a is: " << a << endl;
     cout << "Address of a is: " << ptr << endl;
     ptr = &b;
     cout << "Value of b is: " << b << endl;
     cout << "Address of b is: " << ptr << endl;
     ptr = &c;
     cout << "Value of c is: " << c << endl;
     cout << "Address of c is: " << ptr << endl;
     getch();
     return 0;
}