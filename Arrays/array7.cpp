// Write a program to rotate array by n positions in C++ language.

#include <iostream>
#define LEFT 0
#define RIGHT 1
#define a 10

using namespace std;

void display(int num[],int A);
void rotate_array(int num[],int A, int dir, int shift_count);

int main()
{
   int num[a]={1,2,3,4,5,6,7,8,9,10};  

   display(num,a);
   rotate_array(num,a,LEFT,3);
   display(num,a);

   return 0;
}

void display(int num[],int A)
{
   int i;
   cout << "\n";
   for(i=0; i<A; i++)
      cout << num[i] << " ";
}

void rotate_array(int num[],int A, int dir, int shift_count)
{
   int i,temp;
   if(dir==RIGHT)
   {
      while(shift_count)
      {
         temp=num[A-1];
         for(i=A-1; i>=1; i--)
         {
            num[i]=num[i-1];
         }
         num[0]=temp;
         shift_count--;
      }
   }
   else
   {
      while(shift_count)
      {
         temp=num[0];
         for(i=0; i<=A-2; i++)
         {
            num[i]=num[i+1];
         }
         num[A-1]=temp;
      }
      shift_count--; 
   }
}