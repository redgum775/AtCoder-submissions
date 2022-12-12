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
  int N, D, X;
  vector<int> A;
  cin >> N >> D >> X;
  int tmp;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    A.push_back(tmp);
  }
  ll ans = X;
  for(int a : A){
    for(int i = 0; i < D; i++){
      if(i * a + 1 <= D) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
