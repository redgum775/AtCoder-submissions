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

  if(A * 6 >= B && A <= B){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
