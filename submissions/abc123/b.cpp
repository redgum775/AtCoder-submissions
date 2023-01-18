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

int dish[5];

int main() {
  for(int i = 0; i < 5; i++){
    cin >> dish[i];
  }

  int ans = 0;
  int minus = 0;

  for(int i = 0; i < 5; i++){
    ans += (dish[i] + 10 - 1) / 10 * 10;
    if(dish[i] % 10 != 0){
      minus = min(minus, dish[i] % 10 - 10);
    }
  }
  ans += minus;

  cout << ans << endl;

  return 0;
}
