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
  int A;
  int B;
  cin >> A >> B;

//cout << fixed << setprecision(10); //小数点以下の出力桁数の指定
  int ans = B-A+1;
  if(ans < 0){
    cout << 0 << endl;
  }else{
    cout << ans << endl;

  }

  return 0;
}
