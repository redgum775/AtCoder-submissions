//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  int N;
  ll A, B;
  string S;
  cin >> N >> A >> B >> S;

  S += S;

  ll ans = 1ll << 60;

  for(int i = 0; i < N; i++){
    ll tmp = A * i;
    for(int j = 0; j < N / 2; j++){
      int l = i + j;
      int r = i + N - 1 - j;
      if(S[l] != S[r]) tmp += B;
    }
    ans = min(ans, tmp);
  }

  cout << ans << endl;

  return 0;
}
