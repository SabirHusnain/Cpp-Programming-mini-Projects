/*
Name: Sabir Husnain
Roll No. 2019 MC 263
Section: A
*/

#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     float num1, num2;
     char opr;
     cout << "Enter two number:-" << endl;
     cout << "Number 1: ";
     cin >> num1;
     cout << "Number 2: ";
     cin >> num2;
     cout << "Enter an Operator: ";
     cin >> opr;
     ofstream out("Calculator.txt");
     if (!out)
     {
          cout << "File Opening Error" << endl;
          exit(0);
     }
     switch (opr)
     {
     case '+':
          out << num1 << " + " << num2 << " = " << num1 + num2 << endl;
          break;
     case '-':
          out << num1 << " - " << num2 << " = " << num1 - num2 << endl;
          break;
     case '*':
          out << num1 << " * " << num2 << " = " << num1 * num2 << endl;
          break;
     case '/':
          out << num1 << " / " << num2 << " = " << num1 / num2 << endl;
          break;
     default:
          cout << "Invalid Operator Entered" << endl;
          break;
     }
     getch();
     return 0;
}