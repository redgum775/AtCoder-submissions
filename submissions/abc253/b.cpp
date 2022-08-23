//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

string maze[100];

int main() {
  int H, W;
  cin >> H >> W;

  string line;
  int x, y;
  vector<vector<int>> pos;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
  for (int i = 0; i < H; i++) {
    cin >> line;
    for (int j = 0; j < W; j++){
      if (line[j] == 'o'){
        pos.push_back({i, j});
      }
    }
  }
  
  cout <<   abs(pos[0][0] - pos[1][0]) + abs(pos[0][1] - pos[1][1]) << endl;

  return 0;
}
