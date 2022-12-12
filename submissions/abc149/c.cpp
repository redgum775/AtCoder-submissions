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
  int X;
  cin >> X;

  int ans = X;
  while(true){
    if(X == 2)break;
    bool flg = false;
    for(int i = 2; i <= X / 2 + 1; i++){
      if(ans % i == 0){
        flg = true;
        break;
      }
    }
    if(!flg)break;
    ans++;
  }

  cout << ans << endl;

  return 0;
}
