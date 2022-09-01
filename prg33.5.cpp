// A basic structural program for saling vehicles like cars, bikes etc.
/*
First Program will prompt the user to input data from seller and then,
it will prompt the bouyer to enter price limit and shows the data of cars in his limit
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct vehicle
{
     char vehicleType[50];
};

struct data
{
     char model[50];
     int power;
     int price;
};

struct owner
{
     char ownerName[50];
     char ownerPhone[50];
};

// Common is a child program for all the above structures.
struct common
{
     vehicle t;
     data d;
     owner o;
};

common getData();         // Function to get data from user
void displayData(common); // function to display data

int main()
{
     cout << "Sabir Husnain" << endl
          << "2019 MC 263" << endl
          << endl;
     common obj[5];
     int temp;
     int maxPrice = 0, minPrice = 0;
     // Obtaining Data....
     for (int i = 0; i < 5; i++)
     {
          obj[i] = getData();
     }
     // Displaying Data...
     cout << endl
          << "Displaying for Buyer:-" << endl;
     cout << "Enter your maximum limit for price (0 for no limit):-" << endl;
     cin >> maxPrice;
     cout << "Enter your minimum limit for price (0 for no limit):-" << endl;
     cin >> minPrice;
     if (maxPrice != 0) // Condition for Price limit
     {
          for (int i = 0; i < 5; i++)
          {
               temp = obj[i].d.price;
               if (temp <= maxPrice && temp >= minPrice)
               {
                    displayData(obj[i]);
               }
          }
     }
     else
     {
          for (int i = 0; i < 5; i++)
          {
               displayData(obj[i]);
          }
     }
     getch();
     return 0;
}

common getData()
{
     common obj;
     cout << "Enter vehicle type: ";
     cin.getline(obj.t.vehicleType, 50);
     cout << "Enter model of your vehicle: ";
     cin.getline(obj.d.model, 50);
     cout << "Enter power of your vehicle: ";
     cin >> obj.d.power;
     cout << "Enter price your are demanding: ";
     cin >> obj.d.price;
     cin.ignore();
     cout << "Enter owner's name: ";
     cin.getline(obj.o.ownerName, 50);
     cout << "Enter owner's phone numebr: ";
     cin.getline(obj.o.ownerPhone, 50);
     cout << endl;
     return obj;
}

void displayData(common obj)
{
     cout << "------------------------------------------------" << endl;
     cout << "Vehicle type is: " << obj.t.vehicleType << endl;
     cout << "Model: " << obj.d.model << endl;
     cout << "Power: " << obj.d.power << " CC" << endl;
     cout << "Price: " << obj.d.price << endl;
     cout << "Owner's Name: " << obj.o.ownerName << endl;
     cout << "Owner's phone number: " << obj.o.ownerPhone << endl;
     cout << "------------------------------------------------" << endl;
     cout << endl;
}