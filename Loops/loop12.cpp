// Program to count number of digits in a given number.


#include<iostream>
using namespace std;

int main()
{
   int num,digit;
   int count=0;
   cout << "Enter a number ";
   cin >> num;
   while(num!=0)
   {
      digit=num%10;
      count++;
      num=num/10;
   }
   cout << "The number of digits in the number is: "<<count<<endl;
   return 0;
}