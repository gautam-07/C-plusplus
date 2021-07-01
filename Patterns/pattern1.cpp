/*
•••••••••••••••••••••••••••••••
Author: Gautam Khatter
Date:   30 June 2021
Title:  Pattern 1

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
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (j <= i)
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

