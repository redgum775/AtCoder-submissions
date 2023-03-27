//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <map>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

map<ll, int> socks;

int main() {
  int N;
  cin >> N;

  rep(i, N){
    ll key;
    cin >> key;
    if (socks.find(key) == socks.end() ) {
	    // not found...
      socks[key] = 1;
    } else {
	    // found!
      socks[key]++;
    }
  }

  int ans = 0;
  for(const auto &item : socks){
    ans += item.second / 2;
  }


//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << ans << endl;

  return 0;
}
