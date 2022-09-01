#include <iostream>
#include <conio.h>

using namespace std;

struct shop
{
     int sales;
     int purchase;
     int discount;
};

int main()
{
     shop a1, a2, a3;
     cout << "Enter the sales value: ";
     cin >> a1.sales;
     cout << "Enter the purchase: ";
     cin >> a1.purchase;
     cout << "Enter the discount: ";
     cin >> a1.discount;
     cout << "Enter the sales value: ";
     cin >> a2.sales;
     cout << "Enter the purchase: ";
     cin >> a2.purchase;
     cout << "Enter the discount: ";
     cin >> a2.discount;
     a3 = {10, 20, 30};
     cout << "Results...." << endl;
     cout << "Sales value 1: " << a1.sales << endl;
     cout << "Sales value 1: " << a1.purchase << endl;
     cout << "Sales value 1: " << a1.discount << endl;
     cout << "Sales value 2: " << a2.sales << endl;
     cout << "Sales value 2: " << a2.purchase << endl;
     cout << "Sales value 2: " << a2.discount << endl;
     cout << "Sales value 3: " << a3.sales << endl;
     cout << "Sales value 3: " << a3.purchase << endl;
     cout << "Sales value 3: " << a3.discount << endl;
     return 0;
}