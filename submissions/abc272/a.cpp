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
  int A;
  int ans = 0;
  for(int i = 0; i< N; i++){
    cin >> A;
    ans += A;
  }

  cout << ans << endl;

  return 0;
}
