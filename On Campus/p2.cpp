#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a, b;
     cout << "Enter two numbers:-" << endl;
     cin >> a >> b;
     a = a + b;
     b = a - b;
     a = a - b;
     cout << "After swapping:-" << endl;
     cout << "Number 1: " << a << endl
          << "Number 2: " << b << endl;
     getch();
     return 0;
}