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
  int X, Y, Z;
  cin >> X >> Y >> Z;
  if(Y < 0){
    X *= -1;
    Y *= -1;
    Z *= -1;
  }
  
  int ans = -1;
  if(X < Y) ans = abs(X);
  if(Y < X && Z < Y) ans = abs(Z) + abs(X - Z);

  cout << ans << endl;

  return 0;
}
