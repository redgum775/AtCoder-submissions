//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using ll = long long;
typedef long long ll;

using namespace std;

int main() {
  int T;
  cin >> T;
  double tax = T / 100.0;
  ll N;
  cin >> N;

  vector<bool> used(100+T);
  for(int i = 0; i <= 100; i++){
    used[i + i * tax] = true;
  }

  vector<int> unused;
  for(int i = 0; i < 100 + T; i++){
    if(!used[i]){
      unused.push_back(i);
    }
  }

  ll out = unused[(N - 1) % unused.size()] + (100 + T) * ((N - 1)/ unused.size());
  cout << out << endl;

  return 0;
}
