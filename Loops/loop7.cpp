// Program to print product of first n natural numbers. 


#include<iostream>
using namespace std;

int main()
{
   int i=0,n=0;
   int product=1;
   cout << "How many first natural number's product do you want ";
   cin >> n;
   for (i=1;i<=n;i++)
      product=product*i; 
   cout<<"Product of the first n natural numbers are "<<product<<endl;
   return 0;
}