// Program to print all prime factors of a given number.


#include <iostream>
using namespace std;

int main()
{
   int a,i;
   cout << "Enter a number: "<< endl;
   cin >> a;
   cout << "Prime factors of given number are: ";
   for(i=2;a>1;i++)
   {
      while(a%i==0)
      {
         cout << i << " ";
         a=a/i;
      }
   }
   return 0;
}