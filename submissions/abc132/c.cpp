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

int dn[100001];

int main() {
  int N;
  cin >> N;

  int tmp;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    dn[tmp]++;
  }

  int ans = 0;
  int abc = 0;
  for(int i = 0; i < 100001; i++){
    abc += dn[i];
    if(abc == N / 2) ans++;
  }

  cout << ans << endl;

  return 0;
}
