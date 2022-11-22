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
  string s;
  cin >> s;

  int ans = 0;
  int acgt = 0;
  for(char c : s){
    if(c == 'A' || c == 'C' || c == 'G' || c == 'T') acgt++;
    else acgt = 0;
    ans = max(ans, acgt);
  }

  cout << ans << endl;

  return 0;
}
