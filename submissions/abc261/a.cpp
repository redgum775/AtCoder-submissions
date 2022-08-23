#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int num[101];

int main() {
  int L1, R1, L2, R2;
  int L, R;
  cin >> L1 >> R1 >> L2 >> R2;
  for(int i = L1; i <= R1; i++){
    num[i]++;
  }
  for(int j = L2; j <= R2; j++){
    num[j]++;
  }
  int res = 0;
  for(int n : num){
    if(n==2) res++;
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << max(0, res - 1) << endl;

  return 0;
}
