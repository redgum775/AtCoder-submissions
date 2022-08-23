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
  float A;
  float B;
  cin >> A >> B;

  float kcal;

  kcal = A / 100.0;

  float B_kcal;

  B_kcal = B * kcal; 


//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << B_kcal << endl;

  return 0;
}
