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

  ll N;
  ll K;

  vector<ll> vec;
  vector<ll> cp;


int main() {

  cin >> N >> K;

  for(ll n = 0; n < N; n++){
    ll tmp;
    cin >> tmp;
    vec.push_back(tmp);
  }

  copy(vec.begin(), vec.end(), back_inserter(cp));
  sort(cp.begin(), cp.end());

  ll count = K / N;
  ll last_usr = cp[K % N];

  for(ll n = 0; n < N; n++){
    if(last_usr <= vec[n] || K % N == 0){
      cout << count << endl;
    }else{
      cout << count + 1 << endl;
    }
  }

  return 0;
}
