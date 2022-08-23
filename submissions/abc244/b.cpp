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
  int N;
  string S;
  cin >> N >> S;

  int x = 0, y = 0, d = 0;
  for(int i = 0; i < N; i++){
    if(S[i] == 'S'){
      if(d == 0)x++;
      if(d == 1)y--;
      if(d == 2)x--;
      if(d == 3)y++;
    }
    if(S[i] == 'R') d = (d + 1) % 4;
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << x << " " << y << endl;

  return 0;
}
