#include <iostream>
using namespace std;
 void Primechk(int a){
     int j;
       if( a==0||a==1)
       {
         cout<<"\tNEITHER PRIME NOR COMPOSITE";
       } 
       else
       {
         for ( j = 2; j<a; j++)
         {
            if(a%j==0)
           {
               cout<<"\tCOMPOSITE";
               break;
           }
         }
          if (a==j)
          {
            cout<<"\tPRIME";
          }
          
       } }
        void fibo (int n){
             int a= -1,b=1,c=0;
             for (int i =1;i<=n;i++){
                cout<<endl;
                 c=a+b;
                 cout<<c;
                 Primechk(c);
                 a=b;
                 b=c;
             }
        }
        int main () {
            int n;
             cout<<"ENTER THE NUMBERS OF TERMS :";
             cin>>n;
            cout<<"\n\tFIBONACCI SERIES\n";
            fibo(n);
        }
 