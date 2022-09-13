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
  int K;
  cin >> K;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
  if(K % 60 < 10) cout << (21 + (K / 60)) << ":" << "0" << K % 60 << endl;
  else cout << (21 + (K / 60)) << ":" << K % 60 << endl;

  return 0;
}
