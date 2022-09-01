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
  int N, R;
  cin >> N >> R;

  int ans;
  if(N < 10) ans = R + 100 * (10 - N);
  if(N >= 10) ans = R;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << ans << endl;

  return 0;
}
