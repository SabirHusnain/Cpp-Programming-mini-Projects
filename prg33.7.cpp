// Program to print bill for a shop

#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

struct items // To store items data
{
     char type[50];
     int itemID;
     float price;
};

struct customer // To store customer data
{
     char name[50];
     char phoneNumber[50];
     items shopping[100]; // object array for items
     int nItems;
     float totalAmount = 0;
};

int main()
{
     cout << "Sabir Husnain" << endl
          << "2019 MC 263" << endl
          << endl;
     customer obj;
     cout << "Enter name of customer: ";
     cin.getline(obj.name, 50);
     cout << "Enter phone number of curtomer: ";
     cin.getline(obj.phoneNumber, 50);
     cout << "Enter number of items purchased: ";
     cin >> obj.nItems;
     for (int i = 0; i < obj.nItems; i++)
     {
          // Loop to enter items data
          cin.ignore();
          cout << endl
               << "Enter item number " << i + 1 << " : ";
          cin.getline(obj.shopping[i].type, 50);
          cout << "Enter item ID: ";
          cin >> obj.shopping[i].itemID;
          cout << "Enter item Price: ";
          cin >> obj.shopping[i].price;
          // Sum of prices
          obj.totalAmount = obj.totalAmount + obj.shopping[i].price;
     }
     // Displaying Data...
     cout << endl
          << "Displaying Bill...." << endl
          << endl;
     cout << "Name: " << obj.name << endl;
     cout << "Phone Number: " << obj.phoneNumber << endl;
     cout << "Number of Items Purchased: " << obj.nItems << endl
          << endl;
     cout << "------------------------------------------------------------" << endl;
     cout << setw(20) << left << "Item"
          << setw(15) << right << "ID"
          << setw(20) << right << "Price" << endl;
     cout << "------------------------------------------------------------" << endl;
     for (int i = 0; i < obj.nItems; i++)
     {
          cout << setw(20) << left << obj.shopping[i].type
               << setw(15) << right << obj.shopping[i].itemID
               << setw(20) << right << obj.shopping[i].price << endl;
     }
     cout << endl
          << setw(45) << right << "Total Amount: " << setw(10) << obj.totalAmount << endl;
     // Sending to file... Bill.txt
     ofstream out("Bill.txt");
     out << "Name: " << obj.name;
     out << "\nPhone Number: " << obj.phoneNumber;
     out << "\nNumber of Items Purchased: " << obj.nItems;
     out << "\n------------------------------------------------------------" << endl;
     out << setw(20) << left << "Item"
         << setw(15) << right << "ID"
         << setw(20) << right << "Price";
     out << "\n------------------------------------------------------------" << endl;
     for (int i = 0; i < obj.nItems; i++)
     {
          out << setw(20) << left << obj.shopping[i].type
              << setw(15) << right << obj.shopping[i].itemID
              << setw(20) << right << obj.shopping[i].price << "\n";
     }
     out << "\n\n";
     out << setw(45) << right << "Total Amount: " << setw(10) << obj.totalAmount;
     getch();
     return 0;
}