#include <iostream>
using namespace std;
int main()
{
     int a;
     cout << "Enter a number between 1 to 100: ";
     cin >> a;
     if (a >= 1 && a <= 10)
     {
          cout << "Number is between 1 to 10";
     }
     else if (a > 10 && a <= 20)
     {
          cout << "Number is between 11 to 20";
     }
     else if (a > 20 && a <= 30)
     {
          cout << "Number is between 21 to 30";
     }
     else if (a > 30 && a <= 40)
     {
          cout << "Number is between 31 to 40";
     }
     else if (a > 40 && a <= 50)
     {
          cout << "Number is between 41 to 50";
     }
     else if (a > 50 && a <= 60)
     {
          cout << "Number is between 51 to 60";
     }
     else if (a > 60 && a <= 70)
     {
          cout << "Number is between 61 to 70";
     }
     else if (a > 70 && a <= 80)
     {
          cout << "Number is between 71 to 80";
     }
     else if (a > 80 && a <= 90)
     {
          cout << "Number is between 81 to 90";
     }
     else if (a > 90 && a <= 100)
     {
          cout << "Number is between 91 to 100";
     }
     else
     {
          cout << "number is not between 1 to 100";
     }
     return 0;
}