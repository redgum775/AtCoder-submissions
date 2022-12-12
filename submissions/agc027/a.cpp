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

vector<ll> a;
int main() {
  int N;
  ll x;
  cin >> N >> x;
  ll tmp;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  sort(a.begin(), a.end());
  int ans = 0;
  for(ll count : a){
    x -= count;
    if(x < 0) break;
    ans++;
  }
  if(x > 0) ans--;

  cout << ans << endl;

  return 0;
}
