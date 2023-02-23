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

  replace(S.begin(), S.end(), '0', '_');
  replace(S.begin(), S.end(), '1', '0');
  replace(S.begin(), S.end(), '_', '1');

  cout << S << endl;

  return 0;
}
