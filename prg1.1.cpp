#include <iostream>
#include <conio.h>

using namespace std;

void sum(int &n1, int &n2, int &n3)
{
     n3 = n1 + n2;
}

int main()
{
     int a, b, tsum = 0;
     cout << "Enter teo numbers:-" << endl;
     cin >> a >> b;
     sum(a, b, tsum);
     cout << "Sum is: " << tsum << endl;
     getch();
     return 0;
}