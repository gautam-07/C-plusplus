// Program to print reverse of the given digit.


#include<iostream>
using namespace std;

int main()
{
   int num,digit=0;
   int rev_digit=0;
   cout<<"Enter a number ";
   cin >> num;
   while(num!=0)
   {
      digit=num%10;
      rev_digit=(rev_digit*10)+digit;
      num=num/10;
   }
   cout<<"The reverse of the original digit is: "<<rev_digit<<endl;
   return 0;
}