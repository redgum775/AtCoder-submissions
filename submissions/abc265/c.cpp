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

int H, W;
bool maze[505][505];
string grid[505][505];

void move(int i, int j){
  // cout << x << y << endl;
  if(maze[i][j]){
    cout << -1 << endl;
    return;
  }
  maze[i][j] = true;
  if(grid[i][j] == "U" && i != 1){
    move(i-1, j);
  }else if(grid[i][j] == "D" && i != H){
    move(i+1, j);
  }else if(grid[i][j] == "L" && j != 1){
    move(i, j-1);
  }else if(grid[i][j] == "R" && j != W){
    move(i, j+1);
  }else{
    cout << i << " " << j << endl;
    return;
  }
}

int main() {
  cin >> H >> W;

  string tmp;
  for(int i = 1; i <= H; i++){
    cin >> tmp;
    for(int j = 0; j < W; j++){
      grid[i][j+1] = tmp[j];
    }
  }

  move(1, 1);

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  return 0;
}
