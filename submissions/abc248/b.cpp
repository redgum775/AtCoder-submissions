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
  ll A, B, K;
  cin >> A >> B >> K;

  llu slime = A;
  ll count = 0;

  while(slime < B){
    slime = slime * K;
    count++;
  }

//cout << fixed << setprecision(10); //小数点以下の出力桁数の指定

  cout << count << endl;

  return 0;
}
