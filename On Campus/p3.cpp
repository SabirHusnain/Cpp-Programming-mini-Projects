#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a, b, sum = 0;
     cout << "Enter two numbers:-" << endl;
     cin >> a >> b;
     sum = a - (-b);
     cout << "Sum is: " << sum << endl;
     getch();
     return 0;
}