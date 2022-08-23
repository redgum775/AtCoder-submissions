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
  int a, b, c;
  cin >> a >> b >> c;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
  if ((a <= b && b <= c) || (a >= b && b >= c)){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
