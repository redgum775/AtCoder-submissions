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

ll dp[5][100010];

int main() {
  int N;
  cin >> N;

  int T, X;
  ll A;

  int maxT = 0;

  for(int i = 0; i < N; i++){
    cin >> T >> X >> A;
    maxT = max(T, maxT);
    if(T == 1 && X >= 2 || T == 2 && X >= 3 || T == 3 && X >= 4) continue; // “’B•s‰Â”\‚Ì‚Æ‚«Ÿ‚Ìˆ—‚ğ‚µ‚È‚¢
    dp[X][T] = A;
  }

  for(int t = 1; t <= maxT; t++){
    for(int x = 0; x < 5; x++){
      if(x == 0) dp[x][t] += max(dp[0][t-1], dp[1][t-1]);
      if(0 < x && x < 4) dp[x][t] += max(max(dp[x-1][t-1], dp[x][t-1]), dp[x+1][t-1]);
      if(x == 4) dp[x][t] += max(dp[3][t-1], dp[4][t-1]);
    }
  }

  cout << max(max(max(max(dp[0][maxT], dp[1][maxT]), dp[2][maxT]), dp[3][maxT]), dp[4][maxT])  << endl;

  return 0;
}
