// Program to print sum of n odd natural numbers.


#include<iostream>
using namespace std;

int main()
{
   int i=0,n=0;
   int sum=0;
   cout << "Enter the number of n natural odd sum you want ";
   cin >> n;
   for(i=1;i<=n;i++)
   {
      if(i%2!=0)
         sum=sum+i;
   }
   cout << "The sum of first n odd natural numbers are: "<<sum<<endl;
   return 0;
}