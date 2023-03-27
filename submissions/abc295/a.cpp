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

vector<string> rights = {"and", "not", "that", "the", "you"};

int main() {
  int N;
  cin >> N;

  bool ans = false;

  rep(i, N){
    string tmp;
    cin >> tmp;
    for(string r : rights){
      if(tmp == r) ans = true;
    }
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << (ans ? "Yes" : "No") << endl;

  return 0;
}
