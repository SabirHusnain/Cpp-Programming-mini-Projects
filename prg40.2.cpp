#include <iostream>
#include <conio.h>

using namespace std;

void increment ()
{
     static int i;
     i++;
     cout<<i<<endl;
}

int main()
{
     increment();
     increment();
     increment();
     increment();
     getch();
     return 0;
}