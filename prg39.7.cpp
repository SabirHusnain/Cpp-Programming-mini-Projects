#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0)
    {
        temp = n % 10;
        cout << temp << endl;
        sum = sum + temp;
        n = n / 10;
    }
    cout << "Sum is: " << sum + n << endl;
    getch();
    return 0;
}