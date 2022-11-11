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
  ll H, W;
  cin >> H >> W;

  ll ans;

  if(H == 1 || W == 1){
    ans = 1;
  }else if((H * W) % 2 == 0){
    ans = H * W / 2;
  }else{
    ans = H * W / 2 + 1;
  }

  cout << ans << endl;

  return 0;
}
