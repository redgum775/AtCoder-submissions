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
  ll N, K;
  cin >> N >> K;

  ll ans = min(N % K, K - N % K);

  cout << ans << endl;

  return 0;
}
