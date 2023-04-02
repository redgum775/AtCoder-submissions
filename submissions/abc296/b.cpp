//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  string row = "abcdefgh";
  string ans;
  for(int i = 0; i < 8; i++){
    string S;
    cin >> S;
    for(int j = 0; j < 8; j++){
      if(S[j] == '*') ans = row[j] + to_string(8-i);
    }
  }
  

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << ans << endl;

  return 0;
}
