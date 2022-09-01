#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num;
     cout << "Enter a number:";
     cin >> num;
     if (num % 2 == 0)
     {
          cout << "Number " << num << " is even" << endl;
     }
     else
     {
          cout << "Number " << num << " is odd" << endl;
     }
     getch();
     return 0;
}