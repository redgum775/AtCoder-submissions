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
  string S;
  cin >> S;

  ll ans = 753;
  for(int i = 0; i < S.size()-2; i++){
    ans = min(ans, abs(stoll(S.substr(i, 3)) - 753));
  }

  cout << ans << endl;

  return 0;
}
