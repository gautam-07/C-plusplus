// Write a program to add 2 matrices each of order 3x3

#include <iostream>
using namespace std;

int main()
{
   int A[3][3], B[3][3], C[3][3],i,j;
   cout<< "Enter 9 numbers for matrix 1: ";
   for (i=0; i<=2; i++)
      for (j=0; j<=2; j++)
         cin >> A[i][j];

   cout<< "Enter 9 numbers for matrix 2: ";
   for (i=0; i<=2; i++)
      for (j=0; j<=2; j++)
         cin >> B[i][j];

   cout << "Sum of two matrices are: \n";
   for (i=0; i<=2; i++)
   {
      for (j=0; j<=2; j++)
      {
         C[i][j]= A[i][j] + B[i][j];
         cout << C[i][j] << " ";
      }
      cout << "\n";
   }      
   return 0;  
}