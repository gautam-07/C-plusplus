/*
 Write a program to generate 10 distinct numbers in a given range.
 In this question we will use two function to meet out purpose:

    1. srand()
    To provide a seed number so that every time we run program we get a different pattern.

    2. rand()
    To generate distinct number whose value will not be repeated.
*/


#include <iostream>
#include <stdio.h>
#define a 10

using namespace std;

int main()
{
   int min,max,num[a],i,j,temp;
   cout << "Enter the minimum value of the range : ";
   cin >> min;
   max=min+9;
   cout << "The 10 distinct numbers in the given range are: ";

   srand(time(NULL));

   for(i=0; i<=a-1; i++)
   {
      temp = rand()%10 + min;
      for(j=0; j<=i-1; j++)
      {
         if(temp==num[j])
            break;
      }
      if(i==j)
         num[i]=temp;
      else
         i--;
   }
   for(i=0; i<=a-1; i++)
      cout << num[i] << " ";
   return 0;
}