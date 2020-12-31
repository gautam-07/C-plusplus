// Program to print sum of digits of a given number.


#include <iostream>
using namespace std;

int main()
{
   int num,digit=0,sum=0;
   cout << "Enter a number : ";
   cin >> num;
   while(num!=0)
   {
      digit=num%10;
      sum=sum+digit;
      num=num/10;
   }
   cout << "The sum of digits of the given number is: "<<sum<<endl;
   return 0;
}