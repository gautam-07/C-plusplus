// Program to reverse string using strrev() function.

// Used gets_s() just for to not get error in VScode intellisense, otherwise made run this program using gets().

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
   char str[50];
   int i;
   cout << "Enter a string : ";
   gets_s(str);
   strrev(str);
   cout << "The reverse of the string is : "<< str << endl;
   return 0;
}
