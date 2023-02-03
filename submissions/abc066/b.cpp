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

  int ans = 0;

  for(int i = S.length() / 2; i > 0; i--){
    for(int j = 0; j < i; j++){
      if(S[j] != S[i + j]) break;
      if(j == i-1) ans = i*2;
    }
    if(ans != 0 && ans != S.length()) break;
  }

  cout << ans << endl;

  return 0;
}
