// Program to print all Armstrong numbers under 1000.


#include<iostream>
using namespace std;

int main()
{
   int i,digit,x;
   int sum=0;
   cout<<"Armstrong numbers are: "<<endl;
   for(i=1;i<=1000;i++)
   {
      x=i;
      while(x!=0)
      {
         digit=x%10;
         sum=sum+(digit*digit*digit);
         x=x/10;
      }
      if(sum==i)
      {
         cout<<i<<" ";
      }
   }
   return 0;
}