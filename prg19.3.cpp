#include <iostream>

using namespace std;

int add(int a, int b, int c)
{
     int d = a + b + c;
     return d;
}

int subtract(int e, int f)
{
     int g = e - f;
     return g;
}

int main()
{
     int num1, num2, num3, num4;
     cout << "Enter three numbers:-" << endl;
     cin >> num1 >> num2 >> num3;
     int sum = add(num1, num2, num3);
     cout << "Enter another number: ";
     cin >> num4;
     int ans = subtract(sum, num4);
     cout << "Answer is: " << ans << endl;
     return 0;
}