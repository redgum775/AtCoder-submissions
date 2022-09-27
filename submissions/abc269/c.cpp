//#include <bits/stdc++.h>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main(){
  ll N;
  cin >> N;

  vector<ll> ans = {0};
  for(int i = 0; i < 60; i++){
    if(N&(1ll << i)){
      int sz = ans.size();
      for(int j = 0; j < sz; j++){
        ans.push_back(ans[j]|(1ll<<i));
      }
    }
  }
  sort(ans.begin(), ans.end());
  for(auto &nx : ans){cout << nx << endl;}
  return 0;
}

// WA
bool f[60];
int WA() {
  llu N;
  cin >> N;
  string S = "";
  while(true){
    if(N%2 == 0) S = "0" + S;
    if(N%2 == 1) S = "1" + S;
    if(N == 1 || N == 0) break;
    N /= 2;
  }

  // cout << S << "(2)" << endl;

  for(int i = S.size() - 1; i >= 0; i--){
    if(S[i] == '1') f[S.size() - 1 - i] = true;
  }

  vector<llu> ans;
  ans.push_back(0);

  for(int i = 0; i < 60; i++){
    if(f[i]){
      vector<llu> v(ans.size());
      copy(ans.begin(), ans.end(), v.begin());
      for(llu num: v){
        ans.push_back(num + pow(2, i));
      }
      v.clear();
    }
  }

  for(llu num : ans){
    cout << num << endl;
  }
  
  return 0;
}
