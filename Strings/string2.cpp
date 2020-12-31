// Calculate length of string using strlen() function.
// Prototype of strlen() - int strlen(char*)

// Used gets_s() just for to not get error in VScode intellisense, otherwise made run this program using gets().

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
   char str[20];
   int i;
   cout << "Enter your name : ";
   gets_s(str);
   i = strlen(str);
   cout << "The length of your name is : " << i << endl;
   return 0;  
}