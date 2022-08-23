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
  int K;
  cin >> N >> K;

  int sum = 0;

  for(int n = 1; n <= N; n++){
    for(int k = 1; k <= K; k++){
      sum += 100 * n + k;
    }
  }

  cout << sum << endl;

  return 0;
}
