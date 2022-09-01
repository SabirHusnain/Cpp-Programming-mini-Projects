#include <iostream>
#include <conio.h>

using namespace std;

void increment ()
{
     int i=0;
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