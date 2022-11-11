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

int card[3][3];
bool flg[3][3];

bool judge(){
  if(flg[0][0] && flg[0][1]&& flg[0][2]) return true;
  if(flg[1][0] && flg[1][1]&& flg[1][2]) return true;
  if(flg[2][0] && flg[2][1]&& flg[2][2]) return true;
  if(flg[0][0] && flg[1][0]&& flg[2][0]) return true;
  if(flg[0][1] && flg[1][1]&& flg[2][1]) return true;
  if(flg[0][2] && flg[1][2]&& flg[2][2]) return true;
  if(flg[0][0] && flg[1][1]&& flg[2][2]) return true;
  if(flg[2][0] && flg[1][1]&& flg[0][2]) return true;
  return false;
}

int main() {
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cin >> card[i][j];
    }
  }

  int N;
  cin >> N;
  
  int num;
  for(int i = 0; i < N; i++){
    cin >> num;
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        if(card[i][j] == num) flg[i][j] = true;
      }
    }
  }

  cout << (judge() ? "Yes" : "No") << endl;

  return 0;
}
