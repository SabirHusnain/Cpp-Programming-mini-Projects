#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n = 12345, temp[5], i = 0;
    while (n > 0)
    {
        temp[i] = n % 10;
        i++;
        n = n / 10;
    }
    while (i > 0)
    {
        i--;
        cout << temp[i] << endl;
    }
    getch();
    return 0;
}