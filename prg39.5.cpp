#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter two number: ";
    cin >> n1 >> n2;
    switch (n1>n2)
    {
    case 1:
        cout << n1 << " is greter than " << n2 << endl;
        break;
    case 0:
        cout << n2 << " is greter than " << n1 << endl;
        break;
    default:
        cout<<"Number are equal"<<endl;
        break;
    }
    getch();
    return 0;
}