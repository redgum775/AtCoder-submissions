//#include <bits/stdc++.h>
#include <math.h>
#include <iomanip>
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
  ll H;
  cin >> H;

  cout << fixed << setprecision(10); //小数点以下の出力桁数の指定
  double d = sqrt(H * (12800000 + H));
  cout << d << endl;

  return 0;
}
