#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     float fTemp, cTemp;
     cout << "Enter temperature in Celsius: ";
     cin >> cTemp;

     ofstream out("Temperature.txt");
     if(!out)
     {
          cout<<"Error";
          exit(0);
     }
     fTemp = (9 * cTemp) / 5 + 32;
     out << "Temperature in Fahrenheit is: " << fTemp << endl;
     getch();
     return 0;
}