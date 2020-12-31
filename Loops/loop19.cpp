//Program to print all prime numbers between two given numbers


#include <iostream>
using namespace std;

int main()
{
   int a,b,i,j;
   cout << "Enter two numbers: " << endl;
   cin >> a >> b;
   for(i=a+1;i<=b-1;i++)
   {
      for(j=2;j<i;j++)
         if(i%j==0)
            break;
      if(i==j)
         cout<<j<<" ";
   }
}