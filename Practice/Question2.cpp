/*
************************************************************
✣ Author :- Gautam Khatter
✣ Date   :- 24.03.2021
✣ Site   :- Code Chef
************************************************************
✣ Question :- Sorting tool
✣ Link     :- https://www.codechef.com/problems/KJCP01
************************************************************
*/

#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;


struct freq{
   int n;
   int index;
   int count;
};


bool comapre(freq a , freq b){
   if(a.count == b.count){
      return a.index < b.index;
   }

   return a.count > b.count;
}


int main()
{
   int n, m, num,i;
   cin >> n >> m;
   map < int, pair<int, int>> freqAndIndexMap;

   for (i = 0; i < n; i++){
      cin >> num;
      map<int, pair<int, int>>::iterator it = freqAndIndexMap.find(num);
      if(it == freqAndIndexMap.end()){
         freqAndIndexMap[num] = make_pair(i, 1);
      }
      else{
         freqAndIndexMap[num].second++;
      }
   }

   vector<freq> v;

   for (map<int, pair<int, int>>::iterator it = freqAndIndexMap.begin(); it != freqAndIndexMap.end(); it++){
      freq temp;
      temp.n = it->first;
      temp.index = it->second.first;
      temp.count = it->second.second;
      v.push_back(temp);
   }

   sort(v.begin(), v.end(), comapre);

   for (vector<freq>::iterator it = v.begin(); it != v.end(); it++){
      for (i = 0; i < it->count; i++){
         cout << it->n << " ";
      }
   }
   
   return 0;
}


