#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     float fTemp, cTemp;
     float *f, *c = &cTemp;
     cout << "Enter temperature in Celsius: ";
     cin >> *c;

     *f = (9 * *c) / 5 + 32;
     cout << "Temperature in Fahrenheit is: " << *f << endl;
     getch();
     return 0;
}