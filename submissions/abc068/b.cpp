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

  int ans = 1;

  while(N >= ans * 2){
    ans *= 2;
  }

  cout << ans << endl;

  return 0;
}
