#include <iostream>

using namespace std;

int main()
{
     int a[10], num, start = 0, mid, end = 9;
     bool ans = false;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> a[i];
     }
     cout << "Enter number to find: ";
     cin >> num;
     while (start <= end)
     {
          mid = (start + end) / 2;
          if (num == a[mid])
          {
               ans = true;
               break;
          }
          else if (num > a[mid])
          {
               start = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
     }
     if (ans)
     {
          cout << "Number Found" << endl;
     }
     else
     {
          cout << "Number not found" << endl;
     }
     return 0;
}