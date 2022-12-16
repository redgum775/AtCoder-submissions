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

int f(int x){
  if(x==0) return 1;
  return x * f(x - 1);
}

int main() {
  int N;
  cin >> N;

  cout << f(N) << endl;

  return 0;
}
