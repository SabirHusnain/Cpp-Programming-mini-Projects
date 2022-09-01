#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     int num;
     int i = 1;
     cout << "Enter number to print its table: ";
     cin >> num;
     while (i <= 10)
     {
          cout << num << " x " << setw(2) << i << " = " << setw(2) << num * i << endl;
          i++;
     }
     return 0;
}