#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     int num;
     cout << "Enter a number: ";
     cin >> num;

     ofstream out("Even_Odd.txt");
     if (!out)
     {
          cout << "Error";
          exit(0);
     }
     while (true)
     {
          num -= 2;
          if (num == 0)
          {
               out << "Number is Even" << endl;
               break;
          }
          if (num == 1)
          {
               out << "Number is Odd" << endl;
               break;
          }
     }
     getch();
     return 0;
}