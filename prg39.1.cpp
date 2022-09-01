#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n1, n2, sum, avrg;
    cout << "Enter two number: ";
    cin >> n1 >> n2;
    sum = n1 + n2;
    avrg = sum / 2;
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << avrg << endl;
    getch();
    return 0;
}