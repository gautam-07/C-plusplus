#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
   return a > b;
}

int main()
{
   int test;
   int n,i,x;
   int sum;
   cin >> test;
   while(test){
      sum = 0;
      vector<int> a, b;
      cin >> n;
      for (i = 0; i < n; i++){
         cin >> x;
         a.push_back(x);
      }
      for (i = 0; i < n; i++){
         cin >> x;
         b.push_back(x);
      }

      sort(a.begin(), a.end());
      sort(b.begin(), b.end(), compare);

      for (i = 0; i < n; i++){
         sum += a[i] * b[i];
      }
      cout << sum << endl;
      test--;
   }
   return 0;
}