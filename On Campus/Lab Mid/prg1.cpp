#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     float fTemp;
     float cTemp;
     cout << "Enter temperature in Celsius: ";
     cin >> cTemp;

     fTemp = (9 * cTemp) / 5 + 32;
     cout << "Temperature in Fahrenheit is: " << fTemp << endl;
     getch();
     return 0;
}