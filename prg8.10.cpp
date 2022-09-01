#include <iostream>

using namespace std;

int main()
{
     int num;
     for (int i = 1; i <= 10; i++)
     {
          cout << "Enter a number: ";
          cin >> num;
          if (num >= 1 && num <= 10)
          {
               cout << "Number is between 1 to 10" << endl;
          }
          else if (num >= 11 && num <= 20)
          {
               cout << "Number is between 11 to 20" << endl;
          }
          else if (num >= 21 && num <= 30)
          {
               cout << "Number is between 21 to 30" << endl;
          }
          else
          {
               cout << "Numebr is greater than 30" << endl;
          }
     }
     return 0;
}