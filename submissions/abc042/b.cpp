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
  int N;
  int L;
  cin >> N >> L;
  string S[100];
  for(int n = 0; n < N; n++){
    cin >> S[n];
  }

  sort(S, S + 100);

  string result = "";
  for(string s : S){
    result += s;
  }

//cout << fixed << setprecision(10); //小数点以下の出力桁数の指定

  cout << result << endl;

  return 0;
}
