// Program to print sum of first n natural numbers


#include<iostream>
using namespace std;

int main()
{
   int i=0,n=0;
   int sum=0;
   cout << "How many first natural number's sum do you want ";
   cin >> n;
   for (i=1;i<=n;i++)
   {
      sum=sum+i; 
   }
   cout<<"Sum of the first n natural numbers are "<<sum<<endl;
   return 0;
}