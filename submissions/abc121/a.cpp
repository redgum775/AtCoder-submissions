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
  int H, W, h, w;
  cin >> H >> W >> h >> w;

  int ans = (H-h) * (W-w);

  cout << ans << endl;

  return 0;
}
