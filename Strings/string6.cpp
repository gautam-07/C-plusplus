// Write a program to check if a string is palindrome or not

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   char str[20];
   int i,l;
   cout << "Enter a string that you wanna check: ";
   gets(str);
   for(l=0;str[l];l++);
   for(i=0;i<l/2;i++)
   {
      if(str[i]!=str[l-1-i])
      {
         cout << "It's not a palindrome" << endl;
         break;
      }  
   }
   if(i==l/2)
   {
      cout << "It's a palindrome" << endl;
   }
   return 0;  
}