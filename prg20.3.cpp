#include <iostream>

using namespace std;

void table(int a)
{
     for (int i = 1; i <= 10; i++)
     {
          cout << a << " * " << i << " = " << a * i << endl;
     }
}

int main()
{
     int num;
     cout << "Enter number to print table: ";
     cin >> num;
     table(num);
     return 0;
}