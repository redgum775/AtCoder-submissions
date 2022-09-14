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

vector<int> p={1,1,1,0,0,-1,-1,-1}, q={1,0,-1,1,-1,1,0,-1};
int A[10][10];

int main() {
  int N;
  cin >> N;
  int max_num = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      char tmp;
      cin >> tmp;
      A[i][j]= tmp - '0';
      max_num = max(max_num, tmp - '0');
    }
  }

  ll ans = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(A[i][j] != max_num) continue;
      for(int k = 0; k < 8; k++){
        ll now = 0;
        ll x = i, y = j;
        for(int l = 0; l < N; l++){
          now*=10;
          now += A[x][y];
          x += p[k];
          y += q[k];
          x %= N;
          x += N;
          y %= N;
          y += N;
          x %= N;
          y %= N;
        }
        ans = max(ans, now);
      }
    }
  }

  cout << ans << endl;

  return 0;
}