#include <iostream>
#include <conio.h>

using namespace std;

void PBV(int, int);
void PBR(int &, int &);

struct program
{
     int dec, a, b;
};

int main()
{
     program o1;
     cout << "Enter two numbers:-" << endl;
     cin >> o1.a >> o1.b;
     cout << "1. Pass by Value" << endl
          << "2. Pass by Reference" << endl
          << "Your Choice: ";
     cin >> o1.dec;
     switch (o1.dec)
     {
     case 1:
          PBV(o1.a, o1.b);
          break;
     case 2:
          PBR(o1.a, o1.b);
          break;

     default:
          cout << "Invalid Choice" << endl;
          break;
     }
     cout << "Number 1: " << o1.a << endl
          << "Number 2: " << o1.b << endl;
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