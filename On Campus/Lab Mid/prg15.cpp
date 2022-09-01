#include <iostream>
#include <conio.h>

using namespace std;

struct program
{
     int num, sum=0;
};

int main()
{
     program o1;
     cout << "Enter a number: ";
     cin >> o1.num;
     while (o1.num > 0)
     {
          o1.sum += o1.num % 10;
          o1.num /= 10;
     }
     cout << "Sum of digits is: " << o1.sum << endl;
     getch();
     return 0;
}