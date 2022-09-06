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

int B[25];

int main() {
  int N, M, C;
  cin >> N >> M >> C;
  for(int i = 1; i <= M; i++){
    cin >> B[i];
  }
  int ans = 0;
  int sum = 0;
  int tmp;
  for(int i = 0; i < N; i++){
    for(int j = 1; j <= M; j++){
      cin >> tmp;
      sum += tmp * B[j];
    }
    if(sum + C > 0) ans++;
    sum = 0;
  }

  cout << ans << endl;

  return 0;
}
