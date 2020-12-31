// Program to check whether pair of numbers are co-prime or not


#include <iostream>
using namespace std;

int main()
{
   int a,b,i,f;
   cout << "Enter two numbers that you wanna check as a pair of co-primes: ";
   cin >> a >> b;
   int min;
   min = a<b?a:b;
   for(i=2; i<=min; i++)
   {
      if(a%i==0 && b%i==0)
         break;
   }
   if(i==min+1)
      cout << "The pair ("<< a <<","<<b<<") are co-primes"<< endl;
   else
      cout << "The pair ("<< a <<","<<b<<") are not co-primes"<< endl;
   return 0;
}