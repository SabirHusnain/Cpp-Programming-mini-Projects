#include <iostream>
#include <conio.h>

using namespace std;

void swapping(int, int);

int main()
{
     int a, b;
     cout << "Enter two number:-" << endl << "a: ";
     cin >> a;
     cout << "b: ";
     cin >> b;
     cout << "Befor Swapping:-" << endl;
     cout << "a: " << a << endl;
     cout << "b: " << b << endl;
     cout << "After Swapping:-" << endl;
     swapping(a, b);
     getch();
     return 0;
}

void swapping(int n1, int n2)
{
     int temp = n1;
     n1 = n2;
     n2 = temp;
     cout << "a: " << n1 << endl;
     cout << "b: " << n2 << endl;
}