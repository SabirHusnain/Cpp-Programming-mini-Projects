#include <iostream>
#include <conio.h>

using namespace std;

void PBV(int num)
{
     num = num + 10;
     cout << "Value of num is: " << num << endl;
     cout << "Terminating function" << endl
          << endl;
}

int main()
{
     int a;
     cout << "Enter a number: ";
     cin >> a;
     PBV(a);
     cout << "Value of a is: " << a << endl;
     getch();
     return 0;
}