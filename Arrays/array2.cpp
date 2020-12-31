// Write a program to find greatest among 10 numbers

#include <iostream>
#define a 10

using namespace std;

int main()
{
   int num[a],i;
   int greater=0;
   cout << "Enter 10 numbers: ";
   for(i=0; i<a; i++)
      cin >> num[i];
   for(i=0; i<a; i++)
   {
      if (num[i]>greater)
         greater=num[i];
   }
   cout << "The greatest among 10 numbers is : "<<greater<<endl;
   return 0;
}