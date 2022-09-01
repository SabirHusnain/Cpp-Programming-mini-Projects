// sabir Husnain
// 2019 MC 263
#include <iostream>
#include <conio.h>

using namespace std;

struct library
{
     char name[50];
     char type[50];
};

struct student
{
     char name[50], address[50];
     int id;
};

struct oldStu
{
     student old1;
};

struct newStu
{
     student new1;
};

struct libraryCard
{
     int cardNo;
     char faculty[50];
     char expiryDate[50];
};

struct cardReader
{
     char model;
     char version;
};

struct librarian
{
     char name[50];
     char phone[50];
};

struct book
{
     char name[50];
     char author[50];
};

struct magzine
{
     char name[50];
     char type[50];
     int price;
};

struct weekly
{
     magzine week;
};

struct monthly
{
     magzine month;
};

struct child
{
     library l;
     oldStu oS;
     newStu nS;
     libraryCard libCard;
     cardReader cRead;
     librarian fac;
     book b;
     weekly wMag;
     monthly mMag;
};

int main()
{
     child obj;
     char type[50], type2[50];
     cout << "Enter name of library: ";
     cin.getline(obj.l.name, 50);
     cout << "Enter type of library: ";
     cin.getline(obj.l.type, 50);
     cout << "Enter name of Librarian: ";
     cin.getline(obj.fac.name, 50);
     cout << "Enter phone number of librarian: ";
     cin.getline(obj.fac.phone, 50);
     cout << "Enter type of student (old/new): ";
     cin.getline(type, 50);
     if (type == "old" || type == "Old" || type == "OLD")
     {
          cout << "Enter name of student: ";
          cin.getline(obj.oS.old1.name, 50);
          cout << "Enter address of student: ";
          cin.getline(obj.oS.old1.address, 50);
          cout << "Enter ID of student: ";
          cin >> obj.oS.old1.id;
     }
     else
     {
          cout << "Enter name of student: ";
          cin.getline(obj.nS.new1.name, 50);
          cout << "Enter address of student: ";
          cin.getline(obj.nS.new1.address, 50);
          cout << "Enter ID of student: ";
          cin >> obj.nS.new1.id;
     }
     cout << "Enter card number: ";
     cin >> obj.libCard.cardNo;
     cout << "Enter faculty name: ";
     cin.getline(obj.libCard.faculty, 50);
     cout << "Enter expiry date: ";
     cin.getline(obj.libCard.expiryDate, 50);
     cout << "Enter book name: ";
     cin.getline(obj.b.name, 50);
     cout << "Enter Book author: ";
     cin.getline(obj.b.author, 50);
     cout << "Enter name of magzine: ";
     cin.getline(obj.m.name, 50);
     cout << "Enter type of magzine: ";
     cin.getline(obj.m.type, 50);
     cout << "Enter magzine price: ";
     cin >> obj.m.price;
     cout << "Enter the type of magzine: ";
     cin.getline(type2, 50);
     if (type == "weekly" || type == "Weekly" || type == "WEEKLY")
     {
          cout << "Enter Magzine name: ";
          cin.getline(obj.wMag.week.name, 50);
          cout << "Enter Magzine price: ";
          cin >> obj.wMag.week.price;
     }
     else
     {
          cout << "Enter Magzine name: ";
          cin.getline(obj.wMag.week.name, 50);
          cout << "Enter Magzine price: ";
          cin >> obj.wMag.week.price;
     }
     cout<<"Library Data:-"<<endl;
     cout<<"----------------------------------------------------------------"<<endl;
     cout<<"Library Name: "<<obj.l.name<<endl;
     cout<<"Library Type: "<<obj.l.type<<endl;
     cout<<"----------------------------------------------------------------"<<endl;
     cout<<"Librarian Data:-"<<endl;
     cout<<"----------------------------------------------------------------"<<endl;
     cout<<"Librarian Name: "<<obj.l.name<<endl;
     cout<<"Librarian Phone Numebr: "<<obj.l.type<<endl;
     cout<<"----------------------------------------------------------------"<<endl;
     getch();
     return 0;
}