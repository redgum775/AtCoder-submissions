//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  int N;
  cin >> N;

  int count = 0;
  int max_count = 0;

  ll now, before;
  for(int i = 0; i < N; i++){
    if(i==0) cin >> now;
    if(i!=0){
      before = now;
      cin >> now;
      if(before >= now) count++;
      if(before < now){
        max_count = max(count, max_count);
        count = 0;
      }
    } 
  }
  max_count = max(count, max_count);

  cout << max_count << endl;

  return 0;
}
