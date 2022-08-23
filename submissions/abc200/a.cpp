//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;

using ld = long double;
typedef long double ld;

using namespace std;

int main() {
  int N;
  cin >> N;

  int century = N / 100;
  if((N % 100) != 0) century++;

  cout << century;
  return 0;
}
