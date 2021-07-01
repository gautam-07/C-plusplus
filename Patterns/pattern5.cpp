/*
•••••••••••••••••••••••••••••••
Author: Gautam Khatter
Date:   30 June 2021
Title:  Pattern 5

Pattern: 

              *
            * * *
          * * * * *     
        * * * * * * *     
      * * * * * * * * *   

•••••••••••••••••••••••••••••••
*/

#include <iostream>

int main()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 9; j++)
    {
      if ((j >= 6 - i) && (j <= 4 + i))
      {
        std::cout << "*";
      }
      else
      {
        std::cout << " ";
      }
    }
    std::cout << "\n";
  }

  return 0;
}