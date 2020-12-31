// Program to find smallest among 10 numbers;

#include <iostream>
#include <climits>
#define a 10

using namespace std;

int main()
{
   int num[a],i;
   int smallest=INT_MAX;
   cout << "Enter 10 numbers: ";
   for(i=0; i<a; i++)
      cin >> num[i];
   for (i=0; i<a; i++)
   {
      if (num[i]<smallest)
         smallest=num[i];
   }
   cout << "The smallest among 10 numbers is : "<<smallest<<endl;
   return 0;
}