#include <iostream>

using namespace std;

int main()
{
     int a;
     int i = 0;
     while (i < 10)
     {
          cout << "Enter a Number:";
          cin >> a;
          if (a % 2 == 0)
          {
               cout << "Number is Even" << endl;
          }
          else
          {
               cout << "Number is Odd" << endl;
          }
          i++;
     }
     return 0;
}