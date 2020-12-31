// Program to calculate LCM of two numbers.


#include<iostream>
using namespace std;

int main()
{
   int a,b,l;
   cout<<"Enter two numbers : ";
   cin >> a >> b;
   for(l=a>b?a:b;l<=a*b;l=l+(a>b?a:b))
      if(l%a==0&&l%b==0)
         break;
   cout<<"The lcm of two numbers is : "<<l<<endl;
   return 0;
}