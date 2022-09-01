#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     cout << "Program for Difference between \'exit(1)\' and \'break\' in c++" << endl;
     int num, sum = 0;
     cout << "---> Enter a positive number," << endl
          << "---> Break: -1" << endl
          << "---> Exit: -2" << endl;
     while (true)
     {
          cout << "Your Choice: ";
          cin >> num;
          if (num > 0)
          {
               sum = sum + num;
          }
          else if (num == -1)
          {
               break;
          }
          else if (num == -2)
          {
               cout << "Exiting..." << endl;
               exit(1);
          }
          else
          {
               cout << "Wrong Choice" << endl;
          }
     }
     cout << "Sum is: " << sum << endl;
     getch();
     return 0;
}