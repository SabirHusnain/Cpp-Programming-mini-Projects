#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num;
     while (num > 0)
     {
          cout << "Enter a number: ";
          cin >> num;
     }
     cout << "you entered zero";
     getch();
     return 0;
}