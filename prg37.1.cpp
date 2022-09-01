#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     ofstream out1("Husnain.docx");
     ofstream out2("Husnain.pdf");
     ofstream out3("Husnain.xlsx");
     ofstream out4("Husnain.pptx");
     out1.close();
     out2.close();
     out3.close();
     out4.close();
     getch();
     return 0;
}
