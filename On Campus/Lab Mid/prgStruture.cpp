#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

struct Admin
{
     char fee;
};

struct Student
{
     int rNo;
     int marks[5];
     float average;
     Admin studentFee;
};

int main()
{
     Student s[3];

     // Data Input...
     for (int i = 0; i < 3; i++)
     {
          int temp = 0;
          cout << "Enter roll number of student " << i + 1 << " : ";
          cin >> s[i].rNo;
          cout << "Fee Submitted (Y/N) : ";
          cin >> s[i].studentFee.fee;
          cout << "Enter marks of Roll Number " << s[i].rNo << " :-" << endl;
          for (int j = 0; j < 5; j++)
          {
               cout << "Subject " << j + 1 << " : ";
               cin >> s[i].marks[j];
               temp += s[i].marks[j];
          }
          s[i].average = float(temp) / 5;
     }

     ofstream out("Student.txt");
     if (!out)
     {
          cout << "Error" << endl;
          exit(0);
     }
     out << "Displaying Data....." << endl;

     // Data Output..
     for (int i = 0; i < 3; i++)
     {
          out << "-----------------------------------" << endl;
          out << setw(20) << "Roll Number" << setw(15) << right << "Marks" << endl;
          out << setw(20) << s[i].rNo << endl;
          for (int j = 0; j < 5; j++)
          {
               out << "Subject " << j + 1 << " : " << setw(20) << s[i].marks[j] << endl;
          }
          out << "Average: " << (float)s[i].average << endl;
          if (s[i].studentFee.fee == 'Y' || s[i].studentFee.fee == 'y')
          {
               out << "Fee: Cleared" << endl;
          }
          else
          {
               out << "Fee: Not Cleared" << endl;
          }
          out << "-----------------------------------" << endl;
     }

     // Maximum Average...
     if (s[0].average > s[1].average && s[0].average > s[2].average)
          out << s[0].rNo << " got maximum average marks " << s[0].average;
     else if (s[1].average > s[0].average && s[1].average > s[2].average)
          out << s[1].rNo << " got maximum average marks " << s[1].average;
     else
          out << s[2].rNo << " got maximum average marks " << s[2].average;
     cout << "Operation Performed Successfully" << endl;
     out.close();
     getch();
     return 0;
}