// Write a program to print first N terms of Fibonacci series


#include <iostream>
using namespace std;

int main()
{
   int a=-1,b=1,c,i,x;
   cout << "Enter how many terms you wanna see of the fibonacci series ";
   cin >> x;
   cout << "The first " << x << " terms of fibonacci series are : ";
   for(i=0;i<x;i++)
   {
      c=a+b;
      cout << c << " ";
      a=b;
      b=c;
   }
   return 0;
}