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

ll mod = 1000000007;

int main() {
  ll N;
  cin >> N;

  ll C[N];
  for(int n = 0; n < N; n++){
    cin >> C[n];
  }

  sort(C, C+N);

  ll count = 1;
  for(int n = 0; n < N; n++){
    count *= C[n] - n;
    count = count % mod;
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << count << endl;

  return 0;
}
