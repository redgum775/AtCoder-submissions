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

ll gcd(ll a, ll b) { return (a % b)? gcd(b, a % b): b; }

// input
ll A;
ll B;
ll C;

// output

int main() {

  cin >> A >> B >> C;

  ll side = gcd(gcd(A, B), C);

  ll count = (A / side - 1) + (B / side - 1) + (C / side - 1);

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << count << endl;

  return 0;
}
