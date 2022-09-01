#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number (-1 for exit): ";
    cin >> n;
    if (n == -1)
	  		{
        exit(1);
    }
    else
    {
        sum = sum + n;
    }
    cout << "sum is: " << sum << endl;
    getch();
    return 0;
}
