#include <iostream>

using namespace std;

int main()
{
     int num;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> num;
          if (num == 22)
          {
               cout << "Husnain" << endl;
          }
          else
          {
               cout << i << endl;
          }
     }
     return 0;
}