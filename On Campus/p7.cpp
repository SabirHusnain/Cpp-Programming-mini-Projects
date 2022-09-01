#include <iostream>
#include <conio.h>

using namespace std;

void getData(int &n1, int &n2)
{
     cout << "Enter two numbers:-" << endl;
     cin >> n1 >> n2;
}

int main()
{
     int a, b;
     getData(a, b);
     cout << "Sum is: " << a + b << endl;
     getch();
     return 0;
}