#include <iostream>
#include <conio.h>
using namespace std;

void swapping(int *n1, int *n2)
{
     int temp = *n1;
     *n1 = *n2;
     *n2 = temp;
}

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
     swapping(&a, &b);
     cout << "After Swapping:-" << endl;
     cout << "a: " << a << endl;
     cout << "b: " << b << endl;
     getch();
     return 0;
}