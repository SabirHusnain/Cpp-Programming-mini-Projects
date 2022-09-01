#include <iostream>

using namespace std;

int add(int a, int b, int c)
{
     int d = a + b + c;
     return d;
}

int main()
{
     int num1, num2, num3;
     cout << "Enter three numbers:-" << endl;
     cin >> num1 >> num2 >> num3;
     int sum = add(num1, num2, num3);
     cout << "sum is: " << sum << endl;
     return 0;
}