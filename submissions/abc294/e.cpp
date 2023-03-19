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
  ll L, N, M;
  cin >> L >> N >> M;

  ll ans = 0;

  vector<pair<ll, ll>> in(N);
  for(ll i = 0; i < N; i++){
    cin >> in[i].first >> in[i].second;
  }

  ll idx = 0;
  ll len = 0;
  while(true){
    ll v, l;
    cin >> v >> l;
    if(in[idx].second > l){
      in[idx].second -= l;
      if(in[idx].first == v) ans += l;
      len += l;
    }else if(in[idx].second == l){
      if(in[idx].first == v) ans += l;
      len += l;
      idx++;
    }else{
      while(in[idx].second < l){
        if(v == in[idx].first) ans += in[idx].second;
        len += in[idx].second;
        l -= in[idx].second;
        idx++;
      }
      if(in[idx].second > l){
        in[idx].second -= l;
        if(in[idx].first == v) ans += l;
        len += l;
      }else if(in[idx].second == l){
        if(in[idx].first == v) ans += l;
        len += l;
        idx++;
      }
    }
    if(len == L) break;
  }

  cout << ans << endl;

  return 0;
}
