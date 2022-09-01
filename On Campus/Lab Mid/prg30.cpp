#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     int num, sum = 0;
     cout << "Enter a number: ";
     cin >> num;
     while (num > 0)
     {
          sum += num % 10;
          num /= 10;
     }

     ofstream out("Sum_of_Digits.txt");
     if (!out)
     {
          cout << "Error";
          exit(0);
     }
     out << "Sum of digits is: " << sum << endl;
     getch();
     return 0;
}