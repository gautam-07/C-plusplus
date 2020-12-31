// Program to print factorial of a given number.


#include<iostream>
using namespace std;

int main()
{
   int i=0,n=0;
   int fact=1;
   cout<<"Enter the number for which you want the factorial ";
   cin>>n;
   for(i=n;i>0;i--)
   {
      fact=fact*i;
   }
   cout<< "Factorial is "<<fact<<endl;
   return 0;
}