#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[10], sum = 0, prod = 1;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i];
     }
     for (int i = 0; i < 10; i++)
     {
          sum += arr[i];
          prod *= arr[i];
     }
     cout << "Sum is: " << sum << endl
          << "Product is: " << prod << endl;
     getch();
     return 0;
}