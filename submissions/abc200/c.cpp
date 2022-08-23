//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<ll> a_count(200, 0);

  for(int i = 0; i < N; i++){
    ll tmp;
    cin >> tmp;
    tmp %= 200;
    a_count[tmp]++;
  }

  ll count = 0;
  for(ll a : a_count){
    count += a * (a - 1) / 2;
  }

  cout << count << endl;

  return 0;
}
