/*
Program to find the maximum for few parameters of a country.
User have to enter data for several contriers and then he will choose a
category to display most powerfull contry in that category
*/

#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

struct force
{
     int airForce;
     int navy;
     int army;
     int tStrength;
};

struct state
{
     char name[50];
     unsigned long population;
     int nCity;
     char president[50];
     force f;
};

void displayData(state);

int main()
{
     cout << "Sabir Husnain" << endl
          << "2019 MC 263" << endl
          << endl;
     state a[5];
     int fact, max, temp = 0, num;
     cout << "How many countries you want to analyze: ";
     cin >> num;
     cin.ignore();
     cout << endl;
     for (int i = 0; i < num; i++)
     {
          cout << "Enter name of country: ";
          cin.getline(a[i].name, 50);
          cout << "Enter population: ";
          cin >> a[i].population;
          cout << "Enter number of cities: ";
          cin >> a[i].nCity;
          cin.ignore();
          cout << "Enter President Name: ";
          cin.getline(a[i].president, 50);
          cout << "Enter air force strength out of 100: ";
          cin >> a[i].f.airForce;
          cout << "Enter navy strength out of 100: ";
          cin >> a[i].f.navy;
          cout << "Enter army strength out of 100: ";
          cin >> a[i].f.army;
          a[i].f.tStrength = (a[i].f.airForce + a[i].f.navy + a[i].f.army) / 3;
          cout << endl;
          cin.ignore();
     }
     cout << "It will display the contry which is most powerfull in that domain" << endl
          << "By which factor do you want to analyze:-" << endl
          << "1. Population" << endl
          << "2. Number of cities" << endl
          << "3. Force Strength" << endl
          << "Enter Your Choice: ";
     cin >> fact;
     switch (fact)
     {
     case 1:
     {
          max = a[0].population;
          for (int i = 0; i < num; i++)
          {
               if (a[i].population > max)
               {
                    max = a[i].population;
                    temp = i;
               }
          }
          cout << endl
               << "Country with maximum Population: " << endl;
          displayData(a[temp]);
          break;
     }
     case 2:
     {
          max = a[0].nCity;
          for (int i = 0; i < num; i++)
          {
               if (a[i].nCity > max)
               {
                    max = a[i].nCity;
                    temp = i;
               }
          }
          cout << endl
               << "Country with maximum Number of Cities: " << endl;
          displayData(a[temp]);
          break;
     }
     case 3:
     {
          max = a[0].f.tStrength;
          for (int i = 0; i < num; i++)
          {
               if (a[i].f.tStrength > max)
               {
                    max = a[i].f.tStrength;
                    temp = i;
               }
          }
          cout << endl
               << "Country with maximum Force Strength: " << endl;
          displayData(a[temp]);
          break;
     }
     default:
          cout << "Invalid Entry !" << endl;
     }
     getch();
     return 0;
}

void displayData(state s)
{
     cout << "==============================================" << endl
          << setw(25) << left << "Country" << setw(3) << right << ":" << setw(15) << right << s.name << endl
          << setw(25) << left << "Population" << setw(3) << right << ":" << setw(15) << right << s.population << endl
          << setw(25) << left << "cities" << setw(3) << right << ":" << setw(15) << right << s.nCity << endl
          << setw(25) << left << "Prsident" << setw(3) << right << ":" << setw(15) << right << s.president << endl
          << setw(25) << left << "Forces strength:-" << endl
          << endl
          << setw(25) << left << "Air force" << setw(3) << right << ":" << setw(15) << right << s.f.airForce << endl
          << setw(25) << left << "Navy" << setw(3) << right << ":" << setw(15) << right << s.f.navy << endl
          << setw(25) << left << "Army" << setw(3) << right << ":" << setw(15) << right << s.f.army << endl
          << setw(25) << left << "Average Forces strength" << setw(3) << right << ":" << setw(15) << right << s.f.tStrength << endl
          << "==============================================" << endl;
}