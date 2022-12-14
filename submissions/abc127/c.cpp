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
  int N, M;
  cin >> N >> M;
  int L, R;
  int maxL, minR;
  maxL = 0;
  minR = N;
  for(int i = 0; i < M; i++){
    cin >> L >> R;
    maxL = max(L, maxL);
    minR = min(R, minR);
  }

  cout << max(minR - maxL + 1, 0)<< endl;

  return 0;
}
