//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <math.h>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  int N;
  cin >> N;

  ll ans = 0;
  for(int i = 1; i < N; i++){
    ll p = 0, q = 0;
    for(int x = 1; x <= sqrt(i); x++) if(i % x == 0) ((x*x != i) ? p+=2 : p++);
    for(int x = 1; x <= sqrt(N-i); x++) if((N-i) % x == 0) ((x*x != N-i) ? q+=2 : q++);
    ans += p * q;
  }

  cout << ans << endl;

  return 0;
}
