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
  int Y;
  cin >> Y;

  int ans;
  if(Y % 4 == 0) ans = Y + 2;
  if(Y % 4 == 1) ans = Y + 1;
  if(Y % 4 == 2) ans = Y + 0;
  if(Y % 4 == 3) ans = Y + 3;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << ans << endl;

  return 0;
}
