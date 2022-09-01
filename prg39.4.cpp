#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter two number: ";
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << n1 << " is greter than " << n2 << endl;
    }
    else
    {
        cout << n2 << " is greter than " << n1 << endl;
    }
    getch();
    return 0;
}