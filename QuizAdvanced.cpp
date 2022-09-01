/*
Name: Sabir Husnain
Roll no. 2019 MC 263
Section: A
Subject: Computer Programming
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     int carPrice = 0, wagonPrice = 0, busPrice = 0, truck2AxlePrice = 0, truck3AxlePrice = 0, articulatedTruckPrice = 0;
     int carCount = 0, wagonCount = 0, busCount = 0, truck2AxleCount = 0, truck3AxleCount = 0, articulatedTruckCount = 0;
     int totalAmount = 0, totalPassed = 0, num;
     bool ans = true;
     cout << "1. Car" << endl
          << "2. Wagon" << endl
          << "3. Buss" << endl
          << "4. 2 Axle Truck" << endl
          << "5. 3 Axle Truck" << endl
          << "6. Articulated Truck" << endl
          << "0. End" << endl
          << endl;
     do
     {
          cout << "Enter your choice: ";
          cin >> num;
          switch (num)
          {
          case 0:
          {
               ans = false;
               cout << endl
                    << "Exiting..." << endl;
               break;
          }
          case 1:
          {
               carCount++;
               carPrice = carPrice + 60;
               break;
          }
          case 2:
          {
               wagonCount++;
               wagonPrice = wagonPrice + 80;
               break;
          }
          case 3:
          {
               busCount++;
               busPrice = busPrice + 170;
               break;
          }
          case 4:
          {
               truck2AxleCount++;
               truck2AxlePrice = truck2AxlePrice + 200;
               break;
          }
          case 5:
          {
               truck3AxleCount++;
               truck3AxlePrice = truck3AxlePrice + 200;
               break;
          }
          case 6:
          {
               articulatedTruckCount++;
               articulatedTruckPrice = articulatedTruckPrice + 400;
               break;
          }
          default:
               cout << "Wrong Choice" << endl;
          }
     } while (ans);
     totalPassed = carCount + wagonCount + busCount + truck2AxleCount + truck3AxleCount + articulatedTruckCount;
     totalAmount = carPrice + wagonPrice + busPrice + truck2AxlePrice + truck3AxlePrice + articulatedTruckPrice;
     ofstream out;
     out.open("Toll.txt");
     out << endl
         << "--------------------------------------------------------------------";
     out << "---------------------------------------------------------------------------" << endl;
     out << "Vehicles: ";
     out << setw(30) << "cars"
         << setw(15) << "Wagons"
         << setw(15) << "Busses"
         << setw(23) << "2 Axle Trucks"
         << setw(20) << "3 Axle Trucks"
         << setw(29) << "Articulated Trucks" << endl;
     out << "--------------------------------------------------------------------";
     out << "---------------------------------------------------------------------------" << endl;
     out << "Total Vehicles Passed: ";
     out << setw(15) << carCount
         << setw(15) << wagonCount
         << setw(15) << busCount
         << setw(20) << truck2AxleCount
         << setw(20) << truck3AxleCount
         << setw(25) << articulatedTruckCount << endl;
     out << "--------------------------------------------------------------------";
     out << "---------------------------------------------------------------------------" << endl;
     out << "Amount Received: ";
     out << setw(22) << carPrice
         << setw(15) << wagonPrice
         << setw(15) << busPrice
         << setw(20) << truck2AxlePrice
         << setw(20) << truck3AxlePrice
         << setw(25) << articulatedTruckPrice << endl;
     out << "--------------------------------------------------------------------";
     out << "---------------------------------------------------------------------------" << endl;
     out << "Total Vehicles Passed: " << totalPassed << endl;
     out << "Total Amount Received: " << totalAmount << endl;
     getch();
     return 0;
}