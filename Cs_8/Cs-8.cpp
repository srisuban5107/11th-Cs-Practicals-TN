#include<iostream>
using namespace std;
int id=1001;
class Publisher
{
int Bookno;
char Title[20];
char Author [10];
float Price;
float Totamt;
float calculate (int);
public:
Publisher()
{Bookno=id;
Title[0]='\0';
Author[0]='\0';
Price=0;
Totamt=0;
id++;
}
void Readdata();
void Displaydata();
};
void Publisher::Readdata()
{
int nocopies;
cout<<"Enter the Title name ";cin>>Title;
cout<<"Enter the Author name ";cin>>Author;
cout<<"Enter the Price ";cin>>Price;
cout<<"Enter the Number of copies ";cin>>nocopies;
Totamt=calculate(nocopies);
}
float Publisher::calculate(int x)
{
return x*Price;
}
void Publisher::Displaydata()
{
 cout << "\n\t\tABC PUBLISHERS\n";
        cout << "\t\t~~~~~~~~~~~~~~\n";
        cout << "\t\t   INVOICE\n";
        cout << "\t\t   ~~~~~~~\n";
        cout << "\n==================================\n";
        cout << "Book Number : " << Bookno << endl;
        cout << "Title        : " << Title << endl;
        cout << "Author Name  : " << Author << endl;
        cout << "Price/Book   : " << Price << endl;
        cout << "Total Amount : " << Totamt << endl;
        cout << "==================================\n"; }
int main()
{
int n,i;
Publisher p[10];
cout<<"Enter the number of object to be created";cin>>n;
for (i=0;i<n;i++)
p[i].Readdata();
for (i=0;i<n;i++)
p[i].Displaydata();
return 0;
}