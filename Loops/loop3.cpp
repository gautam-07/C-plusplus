// Program to print n even natural numbers


#include <iostream>
using namespace std;

int main()
{
   int i=0,n=0;
   cout << "How many first even natural numbers do you want ";
   cin >> n;
   for(i=1;i<=n;i++)
   {
      if(i%2==0)
      {
         cout<<i<<" ";
      }
   }
   return 0;
}