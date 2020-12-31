// Program to check if a number is prime or not


#include <iostream>
using namespace std;

int main()
{
   int a,i;
   cout << "Enter a number"<<endl;
   cin>>a;
   for (i=2;i<=a-1;i++)
   {
      if(a%i==0)
         break;
   }
   if (i==a)
      cout<< a << " is a prime number"<<endl;
   else
      cout<< a << " is not a prime number"<<endl;
   return 0;
}