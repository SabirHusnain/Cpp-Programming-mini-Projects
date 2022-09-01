#include <iostream>
#include <conio.h>

using namespace std;

struct descending
{
     int a[5];
};

int main()
{
     descending o1;
     for (int i = 0; i < 5; i++)
     {
          cout << "Enter a number: ";
          cin >> o1.a[i];
     }
     for (int i = 0; i < 5; i++)
     {
          for (int j = i + 1; j < 5; j++)
          {
               if (o1.a[j] < o1.a[i])
               {
                    int temp = o1.a[i];
                    o1.a[i] = o1.a[j];
                    o1.a[j] = temp;
               }
          }
     }
     cout << endl
          << "Array in descending order:-" << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << o1.a[i] << " ";
     }
     getch();
     return 0;
}