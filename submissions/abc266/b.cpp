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
  ll N;
  cin >> N;

  ll ans = N % 998244353;
  if(ans < 0) ans += 998244353;

//cout << fixed << setprecision(10); //小数点以下の出力桁数の指定

  cout << ans << endl;

  return 0;
}
