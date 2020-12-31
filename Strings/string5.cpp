// Write a program to transform string into its uppercase form.

// Used gets_s() just for to not get error in VScode intellisense, otherwise made run this program using gets().

#include <iostream>

using namespace std;

int main()
{
   char str[20];
   int i;
   cout << "Enter a string : ";
   gets_s(str);
   for (i=0; str[i]; i++)
   {
      if (str[i]>='a' && str[i]<='z')
         str[i]=str[i]-32;
   }
   cout << "The uppercase of string is : "<< str << endl;
   return 0;  
}