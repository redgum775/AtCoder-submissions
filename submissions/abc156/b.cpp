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
  int N, K;
  cin >> N >> K;

  int ans = 0;

  while(N >= K){
    N /= K;
    ans++;
  }

//cout << fixed << setprecision(10); //小数点以下の出力桁数の指定

  cout << ans + 1 << endl;

  return 0;
}
