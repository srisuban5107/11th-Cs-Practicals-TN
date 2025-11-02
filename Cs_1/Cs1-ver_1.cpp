#include <iostream>
#include <iomanip>
 using namespace std;
int main () 
{
    float basic,gross,da,hra;
    cout<<"Enter basic salary of an employee :";
   cin>>basic;
    if (basic<25000)
  {
    da = basic*80/100;
    hra= basic*20/100;
  }
   if (basic >=25000 && basic < 40000 ) 
   {
      hra = basic*25/100;
      da = basic * 90 /100;
   }  
     else if (basic >=40000)
     {
        hra = basic*30 /100;
        da = basic*95/100;
     } 
      gross = basic + da + hra;
      cout<< "\n\t Basic Pay ................"<< basic<<endl; 
      cout<< "\t Dearness Allowance ......." << da <<endl;
      cout<< "\t House Rent Allowance......"<< hra <<endl;
      cout<< "\t ------------------------------------------"<<endl;
      cout<< "\t Gross Salary.............."<<gross <<endl;
      cout<< "\t ------------------------------------------"<<endl;
    
}