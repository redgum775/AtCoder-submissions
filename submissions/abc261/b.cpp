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
int PASS = 0;
int WIN = 1;
int LOSE = 2;
int DRAW = 3;
int result[1001][1001];

int main() {
  int N;
  cin >> N;
  string tmp;
  bool isCorrect = true;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    for(int j = 0; j < N; j++){
      if(i == j) continue;
      if(tmp[j] == 'W'){
        result[i][j] = WIN;
        if(result[j][i] != 0 && result[j][i] != LOSE){
          isCorrect = false;
        }
      }else if(tmp[j] == 'L'){
        result[i][j] = LOSE;
        if(result[j][i] != 0 && result[j][i] != WIN){
          isCorrect = false;
        }
      }else if(tmp[j] == 'D'){
        result[i][j] = DRAW;
        if(result[j][i] != 0 && result[j][i] != DRAW){
          isCorrect = false;
        }
      }
    }
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << (isCorrect ? "correct" : "incorrect") << endl;

  return 0;
}
