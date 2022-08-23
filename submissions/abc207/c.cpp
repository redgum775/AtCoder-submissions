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
  cin >> N;

  double tmp_t;
  double tmp_l;
  double tmp_r;

  vector<vector<double>> q(N,vector<double>(2));
  for(int n = 0; n < N; n++){
    cin >> tmp_t >> tmp_l >> tmp_r;
    if(tmp_t == 1){
    }else if(tmp_t == 2){
      tmp_r -= 0.5;
    }else if(tmp_t == 3){
      tmp_l += 0.5;
    }else if(tmp_t == 4){
      tmp_l += 0.5;
      tmp_r -= 0.5;
    }
    q[n][0] = tmp_l;
    q[n][1] = tmp_r;
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
  ll count = 0;
  for(int i = 0; i < N; i++){
    for(int j = i + 1; j < N; j++){
      if( q[i][0] <= q[j][1] && q[j][0] <= q[i][1]  || 
          q[j][0] <= q[i][1] && q[i][0] <= q[j][1]) {
            count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}
