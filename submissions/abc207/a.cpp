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
  int A;
  int B;
  int C;

  cin >> A >> B >> C;

  int max = 0;

  if (max < A+B) max = A+B;
  if (max < A+C) max = A+C;
  if (max < B+C) max = B+C;
//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << max << endl;

  return 0;
}
