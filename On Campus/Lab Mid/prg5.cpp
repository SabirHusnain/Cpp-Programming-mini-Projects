#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a[5];
     for (int i = 0; i < 5; i++)
     {
          cout << "Enter a number: ";
          cin >> a[i];
     }
     for (int i = 0; i < 5; i++)
     {
          for (int j = i + 1; j < 5; j++)
          {
               if (a[j] < a[i])
               {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
               }
          }
     }
     cout << endl
          << "Array in descending order:-" << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << a[i] << " ";
     }
     getch();
     return 0;
}