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
  ll N, A, B;
  cin >> N >> A >> B;

  ll ans = (N / (A + B)) * A + min(A , N % ((A + B)));

  cout << ans << endl;

  return 0;
}
