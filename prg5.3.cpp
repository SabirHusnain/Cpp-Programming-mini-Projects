#include <iostream>

using namespace std;

int main()
{
     char a[50];
     cout << "Enter your name: ";
     cin.getline(a, 50);
     cout << "Hello! " << a;
     return 0;
}