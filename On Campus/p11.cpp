#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     char alp;
     cout << "Enter a character: ";
     cin >> alp;
     cout << "ASCII code of coresponding character is: " << (int)alp;
     getch();
     return 0;
}