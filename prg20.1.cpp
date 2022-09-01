#include <iostream>

using namespace std;

char func(int a, int b, int c)
{
     char alp = 'd';
     return alp;
}

int main()
{
     char call = func(1, 5, 6);
     cout << call << endl;
     return 0;
}