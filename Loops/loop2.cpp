// Program to print natural numbers in reverse order


#include <iostream>
using namespace std;

int main()
{
   int i=0,n=0;
   cout<<"How many natural numbers do you wanna see ";
   cin >> n;
   for(i=n;i>=1;i--)
   {
      cout<<i<<" ";
   }
   return 0;
}