/*
Name: Sabir Husnain
Roll no. 2019 MC 263
Section: A
Subject: Computer Programming
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num, carPrice = 0, wagonPrice = 0, busPrice = 0, truck2AxlePrice = 0, truck3AxlePrice = 0, articulatedTruckPrice = 0;
     int carCount = 0, wagonCount = 0, busCount = 0, truck2AxleCount = 0, truck3AxleCount = 0, articulatedTruckCount = 0;
     bool ans = true;
     cout << "1. Car" << endl
          << "2. Wagon" << endl
          << "3. Buss" << endl
          << "4. 2 Axle Truck" << endl
          << "5. 3 Axle Truck" << endl
          << "6. Articulated Truck" << endl
          << "0. End" << endl << endl;
     do
     {
          cout << "Enter your choice: ";
          cin >> num;
          switch (num)
          {
          case 0:
          {
               ans = false;
               cout << endl << "Exiting..." << endl;
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
     cout << endl
          << endl;
     cout << "Cars Passed: " << carCount << endl;
     cout << "Amount Received by Cars: " << carPrice << endl;
     cout << "Wagons Passed: " << wagonCount << endl;
     cout << "Amount Received by Wagon: " << wagonPrice << endl;
     cout << "Busses Passed: " << busCount << endl;
     cout << "Amount Received by Busses: " << busPrice << endl;
     cout << "2 Axle Trucks Passed: " << truck2AxleCount << endl;
     cout << "Amount Received by 2 Axle Trucks: " << truck2AxlePrice << endl;
     cout << "3 Axle Trucks Passed: " << truck3AxleCount << endl;
     cout << "Amount Received by 3 Axle Trucks: " << truck3AxlePrice << endl;
     cout << "Articulated Trucks Passed: " << articulatedTruckCount << endl;
     cout << "Amount Received by Articulated Trucks: " << articulatedTruckPrice << endl << endl;
     cout << "Total Vehicles Passed: " << carCount + wagonCount + busCount + truck2AxleCount + truck3AxleCount + articulatedTruckCount << endl;
     cout << "Total Amount Received: " << carPrice + wagonPrice + busPrice + truck2AxlePrice + truck3AxlePrice + articulatedTruckPrice << endl;
     getch();
     return 0;
}
