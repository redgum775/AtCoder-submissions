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

bool dp[55][10005];

int main() {
  int N, X;
  cin >> N >> X;
  dp[0][0] = true;
  for(int i = 0; i < N; i++){
    int A, B;
    cin >> A >> B;
    for(int j = 0; j <= X; j++){
      if(!dp[i][j]) continue;
      for(int k = 0; k <= B; k++){
        if(X < j+A*k) break;
        dp[i+1][j+A*k] = true;
      }
    }
  }

  cout << (dp[N][X] ? "Yes" : "No") << endl;

  return 0;
}
