#include <iostream>
using namespace std;
 int main()
 {
  float precent ;
   cout<< "Enter your precent :";
   cin>>precent;
   cout<<"You scored :"<<precent<<"%"<<endl;
  int  x=precent/10;
   switch (x)
   {
   case 10:
   case 9:
   case 8: 
   cout<<"You have passed with distinction";
    break;
    case 7:
    case 6:
    cout<<"You have passed with first division";
    break;
    case 5:
    cout<<"You have passed with second division";
    break;
    case 4:
    cout<<"You have passed with  third division";
    break; 
   default : 
     cout<<"Sorry You have failed";
    break;
   }
 }