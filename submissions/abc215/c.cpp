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

string rstring(string str, ll k){
  while(k>1){
    next_permutation(str.begin(),str.end());
    k--;
  }
  return str;
}

int main() {
  string S;
  ll K;
  cin >> S >> K;

  sort(S.begin(), S.end());

  string ans = rstring(S, K);

  cout << ans << endl;

  return 0;
}
