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
  ll N;
  ll A;
  ll X;
  ll Y;
  cin >> N >> A >> X >>Y;

//cout << fixed << setprecision(10); //小数点以下の出力桁数の指定

 ll sum;
  if(N <= A){
    sum = N * X;
  }else{
    sum = A * X + (N - A) * Y;
  }
  cout << sum << endl;

  return 0;
}
