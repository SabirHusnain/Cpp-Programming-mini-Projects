#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     char name[20], *p;
     cout << "Enter name: ";
     cin.getline(name, 20);
     p = &name[0];
     cout << "Name is: " << p << endl;
     getch();
     return 0;
}