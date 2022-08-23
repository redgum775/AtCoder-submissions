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
  ll A, B, K;
  cin >> A >> B >> K;

  llu slime = A;
  ll count = 0;

  while(slime < B){
    slime = slime * K;
    count++;
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << count << endl;

  return 0;
}
