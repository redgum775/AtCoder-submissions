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
  ll K;
  cin >> N >> K;
  
  //ll mura[100000000000000010];
  vector<pair<ll, ll>> mura(N);
//  ll mura[N][2];

  for(ll i = 0; i < N; i++){
    ll A;
    ll B;
    cin >> A >> B;
    mura[i] = {A, B};
  }
  sort(mura.begin(), mura.end());

  ll now = 0;
  for(auto v : mura){
    if(K - (v.first - now) < 0){
      break;
    }else{
      K -= v.first - now;
      now = v.first;
      K += v.second;
    }
  }
  now += K;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << now << endl;

  return 0;
}
