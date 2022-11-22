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
  int v[N];
  for(int i = 0; i < N; i++) cin >> v[i];

  sort(v, v+N);

  double ans = v[0];
  for(int i = 1; i < N; i++) ans = (ans + v[i]) / 2;

  cout << ans << endl;

  return 0;
}
