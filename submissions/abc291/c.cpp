//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

set<pair<int, int>> path;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int x = 0, y = 0;
  path.insert({0, 0});
  for(int i = 0; i < N; i++){
    if(S[i] == 'R'){
      x++;
      path.insert({x, y});
    }
    if(S[i] == 'L'){
      x--;
      path.insert({x, y});
    }
    if(S[i] == 'U'){
      y++;
      path.insert({x, y});
    }
    if(S[i] == 'D'){
      y--;
      path.insert({x, y});
    }
  }

  cout << (path.size() != N+1 ? "Yes" : "No") << endl;

  return 0;
}
