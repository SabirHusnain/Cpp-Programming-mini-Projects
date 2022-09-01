// Program to obtain difference between two time.

#include <iostream>
#include <conio.h>

using namespace std;

struct time
{
     int hour;
     int minute;
     int second;
};

time setTime();                  // Function to get data from user
void timeDifference(time, time); // Function to calculate the difference

int main()
{
     cout << "Sabir Husnain" << endl
          << "2019 MC 263" << endl
          << endl;
     time t1, t2;
     // Obtaining Data...
     cout << "Enter First Time:-" << endl;
     t1 = setTime();
     cout << "Enter second Time:-" << endl;
     t2 = setTime();
     // Checking whether the difference is possible or not
     if (t2.hour > t1.hour)
     {
          // Displaying Data...
          timeDifference(t1, t2);
     }
     else
     {
          cout << "Invalid data entered !" << endl;
          cout << "Second time should be greater than First" << endl;
     }
     getch();
     return 0;
}

time setTime()
{
     time tGet;
     cout << "Hours: ";
     cin >> tGet.hour;
     cout << "Minutes: ";
     cin >> tGet.minute;
     cout << "Seconds: ";
     cin >> tGet.second;
     return tGet;
}

void timeDifference(time t1, time t2)
{
     time t3;
     t3.second = t2.second - t1.second;
     t3.minute = t2.minute - t1.minute;
     t3.hour = t2.hour - t1.hour;
     t3.minute = t3.minute + (t3.second / 60);
     t3.second = t3.second % 60;
     t3.hour = t3.hour + (t3.minute / 60);
     t3.minute = t3.minute % 60;
     cout << "Difference between times: ";
     cout << t1.hour << ":" << t1.minute << ":" << t1.second;
     cout << " and ";
     cout << t2.hour << ":" << t2.minute << ":" << t2.second << " is: ";
     cout << t3.hour << ":" << t3.minute << ":" << t3.second << endl;
}