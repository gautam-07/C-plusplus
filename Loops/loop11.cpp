// Program to calculate x power y.


#include<iostream>
using namespace std;

int main()
{
   int i=0,num=0,pow=0,exponent=1;
   cout << "Enter the number you want the exponent of: ";
   cin >> num;
   cout << "Enter the power by which you want the exponent: ";
   cin >> pow;
   for(i=1;i<=pow;i++)
   {
      exponent=exponent*num;
   }
   cout << "The exponent of "<<num<<" by "<<pow<<" is "<<exponent<<endl;
   return 0;
}