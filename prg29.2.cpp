#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a = 10;
     int *ptr = &a;
     cout << "Address of a is: " << &a << endl;
     cout << "Address of a is: " << ptr << endl;
     getch();
     return 0;
}