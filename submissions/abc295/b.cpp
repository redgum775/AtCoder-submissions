//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

char B[20][20];

int ctoi(char c) {
	switch (c) {
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return -1;
	}
}

void bomb(int x, int y, int d) {
  if(x < 0 || y < 0 || x >= 20|| y >= 20) return;
  if(d == -1) return;
  if(B[x][y] == '#'){
    B[x][y] = '.';
    // cout << "bomb" << x << y << endl;
  }
  d--;
  bomb(x+1,y,d);
  bomb(x-1,y,d);
  bomb(x,y+1,d);
  bomb(x,y-1,d);
  return;
}

int main() {
  int R, C;
  cin >> R >> C;

  for(int i = 0; i < R; i++){
    string tmp;
    cin >> tmp;
    for(int j = 0; j < C; j++){
      B[i][j] = tmp[j];
    }
  }

  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      if(ctoi(B[i][j]) != -1){
        bomb(i, j , ctoi(B[i][j]));
        B[i][j] = '.';
      }
    }
  }

  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      cout << B[i][j];
    }
    cout << endl;
  }

  return 0;
}
