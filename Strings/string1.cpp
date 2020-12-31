// Program to calculate length of a string.

// Used gets_s() just for to not get error in VScode intellisense, otherwise made run this program using gets().

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   char str[20];
   int i;

   cout << "Enter a string: ";
   gets_s(str);
   for (i=0;str[i]!='\0';i++);
   cout << "Length of string is: " << i << endl;
   return 0;  
}