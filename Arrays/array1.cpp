/*
 Write a program to calculate sum of all of all  even numbers and sum of all odd numberr. Numbers are stored in an array
*/

#include <iostream>
#define a 10

using namespace std;

int main()
{
   int num[a],i;
   int even,odd,even_sum=0,odd_sum=0;
   cout << "Enter 10 numbers : ";
   for(i=0; i<a; i++)
      cin >> num[i];
   for(i=0; i<a; i++)
   {
      if (num[i]%2==0)
      {
         even=num[i];
         even_sum=even_sum+even;
      }
      else
      {
         odd=num[i];
         odd_sum=odd_sum+odd;
      }  
   }
   cout << "The sum of even numbers in the given numbers are : "<< even_sum<<endl;
   cout << "The sum of odd numbers in the given numbers are : "<< odd_sum<<endl;
   return 0;
}