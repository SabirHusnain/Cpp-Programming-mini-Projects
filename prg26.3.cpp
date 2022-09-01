/*
Sabir Husnain
2019 MC 263
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct book
{
     int id, pages;
     float price;
     char name[30];
};

int main()
{
     book b[10];
     int max, min;
     for (int i = 0; i < 3; i++)
     {
          cout << "Enter book ID: ";
          cin >> b[i].id;
          cin.ignore();
          cout << "Enter book name: ";
          cin.getline(b[i].name, 30);
          cout << "Enter book pages: ";
          cin >> b[i].pages;
          cout << "Enter book price: ";
          cin >> b[i].price;
     }

     // sabir husnain
     // 2019 MC 263
     
     max=b[0].price;
     min=b[0].price;
     for (int i = 0; i < 3; i++)
     {
          if (b[i].price>max)
          {
               max=b[i].price;
          }
     }
     for (int i = 0; i < 3; i++)
     {
          if (b[i].price<min)
          {
               min=b[i].price;
          }
     }
     cout<<"Maximum Price is: "<<max<<endl;
     cout<<"Minimum Price is: "<<min<<endl;
     getch();
     return 0;
}
