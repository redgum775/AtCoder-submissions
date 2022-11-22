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

bool tool_gates[102];

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  int idx;
  for(int i = 0; i < M; i++){
    cin >> idx;
    tool_gates[idx] = true;
  }

  int ans = 102;
  int cost = 0;
  for(int i = 0; i < N + 1; i++){
    if(tool_gates[i]) cost++;
    if(i == X){
      ans = cost;
      cost = 0;
    }
  }
  ans = min(ans, cost);

  cout << ans << endl;

  return 0;
}
