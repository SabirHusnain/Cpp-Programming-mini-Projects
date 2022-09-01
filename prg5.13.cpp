#include <iostream>

using namespace std;

int main()
{
     int a;
     cout << "Enter a number between 45 and 50: ";
     cin >> a;
     if (a == 45)
          cout << "Number is 45";
     else if (a == 46)
          cout << "Number is 46";
     else if (a == 47)
          cout << "Number is 47";
     else if (a == 48)
          cout << "Number is 48";
     else if (a == 49)
          cout << "Number is 49";
     else if (a == 50)
          cout << "Number is 50";
     else
          cout << "It is other than 1 to 50";

     return 0;
}