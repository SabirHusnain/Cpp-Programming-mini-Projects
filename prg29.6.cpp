#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     float a = 10.5;
     float *p = &a;
     cout << "Value of a is: " << *p << endl;
     getch();
     return 0;
}