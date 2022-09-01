#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     // Use loops carefully when dealing with Arrays
     int a[10];
     for (int i = 0; i <= 10; i++)
     {
          cout << "Enter number: ";
          cin >> a[i];
          cout << a[i] << endl;
     }
     getch();
     return 0;
}