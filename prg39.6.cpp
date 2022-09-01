#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n1=123456, n2=10;
    // Symbol '/' will return answer after diving two numbers
    cout << "Using \'/\' Operator: " << float(n1 / n2) << endl;
    // Symbol '%' will return reamainder after diving two numbers
    cout << "Using \'%\' Operator: " << float(n1 % n2) << endl;
    getch();
    return 0;
}