#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int n = 10;
     float f = 30.10;
     char c = 'A';
     void *ptr;
     ptr = &n;
     cout << "The value of n is: " << n << endl;
     cout << "The address of n is: " << ptr << endl;
     ptr = &f;
     cout << "The value of f is: " << f << endl;
     cout << "The address of f is: " << ptr << endl;
     ptr = &c;
     cout << "The value of c is: " << c << endl;
     cout << "The address of c is: " << ptr << endl;
     getch();
     return 0;
}