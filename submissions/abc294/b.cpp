//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

char maze[105][105];

int main() {
  int H, W;
  cin >> H >> W;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      int tmp;
      cin >> tmp;
      if(tmp == 0) maze[j][i] = '.';
      else maze[j][i] = 'A' + (tmp - 1);
    }
  }

  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cout << maze[j][i];
    }
    cout << endl;
  }

  return 0;
}
