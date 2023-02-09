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
  int N, K;
  cin >> N >> K;

  vector<string> S(105);

  for(int i = 0; i < N; i++) cin >> S[i];
  
  sort(S.begin(), S.begin()+K);

  for(int i = 0; i < K; i++) cout << S[i] << endl;

  return 0;
}
