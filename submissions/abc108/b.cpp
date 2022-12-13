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
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  int x, y;
  int x3, y3, x4, y4;
  x = x2 - x1;
  y = y2 - y1;
  x3 = x2 - y;
  y3 = y2 + x;
  x4 = x1 - y;
  y4 = y1 + x;

  cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

  return 0;
}
