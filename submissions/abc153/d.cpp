//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  ll H;
  cin >> H;

  int num = 0;
  while(H != 1){
    H /= 2;
    num++;
  }

  cout << ll(pow(2, num+1) - 1) << endl;

  return 0;
}
