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
  sort(S.begin(), S.end());
  char before = S[0];
  bool flg = true;
  for(int i = 1; i < S.size(); i++){
    if(S[i] == before) flg = false;
    before = S[i];
  }

  cout << (flg ? "yes" : "no") << endl;

  return 0;
}
