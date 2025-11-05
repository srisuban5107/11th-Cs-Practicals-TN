#include <iostream>
using namespace std;
void printBoundary (int a[][10], int m, int n)
{
for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++)
{
if (i==0|| j==0||i==m-1||j==n-1)
cout<<a[i][j]<<"\t"; // \t was to create the Boundary elements almost like book or we can use single space
else
cout<<"\t";  // \t was to create the Boundary elements  almost like book or we can use doulble space
}
cout <<endl ;
}
}
// Driver code
int main()
{
int a[10][10] ,i,j,m,n;
cout<<"Enter more than 3 number of rows and columns"<<endl;
cin>>m>>n;
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
cout<<"enter the value for array["<<i+1<<"]"<<"["<<j+1<<"] :";
cin>>a[i][j];
}
}
system("cls");
cout<<"\n\nOriginal Array\n";
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
cout<<"\n\n The Boundry element\n";
printBoundary(a, m, n);
return 0;
}