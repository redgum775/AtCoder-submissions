//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  ll N;
  cin >> N;

  ll k = 0;
  while(true){
    if((ll)pow(2, k) > N) break;
    k++;
  }

  cout << k - 1 << endl;

  return 0;
}
