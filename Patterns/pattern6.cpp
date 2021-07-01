/*
•••••••••••••••••••••••••••••••
Author: Gautam Khatter
Date:   30 June 2021
Title:  Pattern 6

Pattern: 

             * 
            * *
           * * *
          * * * * 
         * * * * *

•••••••••••••••••••••••••••••••
*/

#include <iostream>

int main()
{
  int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    k = 1;
    for (j = 1; j <= 9; j++)
    {
      if ((j >= 6 - i) && (j <= 4 + i) && k)
      {
        std::cout << "*";
        k = 0;
      }
      else
      {
        std::cout << " ";
        k = 1;
      }
    }
    std::cout << "\n";
  }
  return 0;
}
