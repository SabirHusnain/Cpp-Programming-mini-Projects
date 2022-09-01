#include <iostream>
#include <conio.h>

using namespace std;

void PBV(int, int);
void PBR(int *, int *);

int main()
{
     int a, b, dec, *decision = &dec, *n1 = &a, *n2 = &b;
     cout << "Enter two numbers:-" << endl;
     cin >> *n1 >> *n2;
     cout << "1. Pass by Value" << endl
          << "2. Pass by Reference" << endl
          << "Your Choice: ";
     cin >> *decision;
     switch (*decision)
     {
     case 1:
          PBV(*n2, *n1);
          break;
     case 2:
          PBR(n1, n2);
          break;

     default:
          cout << "Invalid Choice" << endl;
          break;
     }
     cout << "Number 1: " << *n1 << endl
          << "Number 2: " << *n2 << endl;
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

void PBR(int *n1, int *n2)
{
     int temp = *n1;
     *n1 = *n2;
     *n2 = temp;
     cout << endl
          << "Numbers will swap" << endl;
}