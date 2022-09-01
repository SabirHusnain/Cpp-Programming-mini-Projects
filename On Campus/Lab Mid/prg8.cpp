#include <iostream>
#include <conio.h>

using namespace std;

void PBV(int, int);
void PBR(int &, int &);

int main()
{
     int a, b;
     cout << "Enter two numbers:-" << endl;
     cin >> a >> b;
     int dec;
     cout << "1. Pass by Value" << endl
          << "2. Pass by Reference" << endl
          << "Your Choice: ";
     cin >> dec;
     switch (dec)
     {
     case 1:
          PBV(a, b);
          break;
     case 2:
          PBR(a, b);
          break;

     default:
          cout << "Invalid Choice" << endl;
          break;
     }
     cout << "Number 1: " << a << endl
          << "Number 2: " << b << endl;
     getch();
     return 0;
}

void PBV(int n1, int n2)
{
     int temp = n1;
     n1 = n2;
     n2 = temp;
     cout << endl
          << "Numbers won't swap" << endl;
}

void PBR(int &n1, int &n2)
{
     int temp = n1;
     n1 = n2;
     n2 = temp;
     cout << endl
          << "Numbers will swap" << endl;
}