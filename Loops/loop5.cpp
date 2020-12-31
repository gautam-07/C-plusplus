// Program to print table of users choice


#include <iostream>
using namespace std;

int main()
{
   int n=0,i=0;
   cout<<"Enter the table that you wanna see ";
   cin >> n;
   for (i=1;i<=10;i++)
   {
      int product=0;
      product=n*i;
      cout<<n<<" * "<<i<<" = "<<product<<endl;
   }
   return 0;
}