//#include <bits/stdc++.h>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

ll MOD = 998244353;
int card[200005][2];
ll dp[200005][2];

int main() {
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> card[i][0] >> card[i][1];
  }
  dp[0][0] = 1;
  dp[0][1] = 1;
  for(int i = 1; i < N; i++){
    for(int pre = 0; pre < 2; pre++){
      for(int nxt = 0; nxt < 2; nxt++){
        if(card[i-1][pre]!=card[i][nxt]) dp[i][nxt] += dp[i-1][pre];
      }
    }
    dp[i][0] %= MOD;
    dp[i][1] %= MOD; 
  }

  cout << (dp[N-1][0] + dp[N-1][1]) % MOD << endl;

  return 0;
}
