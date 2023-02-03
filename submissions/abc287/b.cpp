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

vector<string> S, T;

int main() {
  int N, M;
  cin >> N >> M;
  string tmp;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    S.push_back(tmp);
  }
  for(int i = 0; i < M; i++){
    cin >> tmp;
    T.push_back(tmp);
  }

  ll ans = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      bool flg = true;
      for(int q = 0; q < 3; q++){
        if(S[i][q+3] != T[j][q]){
          flg = false;
          break;
        }
      }
      if(flg){
        ans++;
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
