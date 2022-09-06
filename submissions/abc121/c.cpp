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
  int N, M;
  cin >> N >> M;

  vector<pair<ll, int>> shop;
  ll A;
  int B;
  for(int i = 0; i < N; i++){
    cin >> A >> B;
    shop.push_back({A, B});
  }
  sort(shop.begin(), shop.end());

  ll ans = 0;
  int idx = 0;
  while(M > 0){
    ans += shop[idx].first * min(shop[idx].second, M);
    M -= shop[idx].second;
    idx++;
  }

  cout << ans << endl;

  return 0;
}
