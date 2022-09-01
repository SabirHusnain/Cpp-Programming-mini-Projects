#include <iostream>

using namespace std;

int main()
{
     int a;
     cout << "Enter a number between 1 and 3: ";
     cin >> a;
     if (a == 1)
          cout << "Number is 1";
     else if (a == 2)
          cout << "Number is 2";
     else if (a == 3)
          cout << "Number is 3";
     else
          cout << "It is other than 1 to 10";
     return 0;
}