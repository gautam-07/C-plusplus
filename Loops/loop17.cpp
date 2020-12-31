// Program to calculate HCF of two numbers.


#include <iostream>
using namespace std;

int main()
{
   int a,b,hcf;
   cout<< "Enter two numbers: ";
   cin >> a >> b;
   for(hcf=a<b?a:b;hcf>=1;hcf--)
   {
      if (a%hcf==0&&b%hcf==0)
         break;
   }
   cout << "The hcf of two numbers is : "<<hcf<<endl;
   return 0;
}