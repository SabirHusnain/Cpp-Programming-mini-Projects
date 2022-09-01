#include <iostream>
#include <conio.h>

using namespace std;

struct Temp
{
     float cTemp;
     float fTemp;
};

int main()
{
     Temp conv;
     cout << "Enter temperature in Celsius: ";
     cin >> conv.cTemp;

     conv.fTemp = (9 * conv.cTemp) / 5 + 32;
     cout << "Temperature in Fahrenheit is: " << conv.fTemp << endl;
     getch();
     return 0;
}