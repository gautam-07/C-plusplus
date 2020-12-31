// Program to print n odd natural numbers 


#include <iostream>
using namespace std;

int main()
{
   int i=0,n=0;
   cout<<"How many first odd natural numbers do you want ";
   cin >> n;
   for(i=n;i>=1;i--)
   {
      if(i%2!=0)
      {
         cout<<i<<" ";
      }
   }
}