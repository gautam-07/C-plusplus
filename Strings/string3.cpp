// Write a program to reverse a string.

// Used gets_s() just for to not get error in VScode intellisense, otherwise made run this program using gets().

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   char str[50],ch;
   int i,l;
   cout << "Enter a string : ";
   gets_s(str);
   for(l=0; str[l]; l++);
   for(i=0; i<l/2; i++)
   {
      ch = str[i];
      str[i] = str[l-1-i];
      str[l-1-i] = ch;
   } 
   cout << "The reverse of string is : " << str << endl; 
   return 0;  
}