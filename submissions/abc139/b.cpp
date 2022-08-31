//#include <bits/stdc++.h>
#include <math.h>
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
  int A, B;
  cin >> A >> B;

  int ans =  ceil((B - 1.0) / (A - 1.0));

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << ans << endl;

  return 0;
}
