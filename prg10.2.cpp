#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     int num;
     int prod=1;
     int i = 1;
     cout << "Enter number to print its table: ";
     cin >> num;
     while (i <= num)
     {
          prod=prod*i;
          i++;
     }
     cout<<"Product is: "<<prod<<endl;
     return 0;
}