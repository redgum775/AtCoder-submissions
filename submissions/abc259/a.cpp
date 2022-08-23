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
  int N, M, X, T, D;
  cin >> N >> M >> X >> T >> D;

  int age = N;
  int height = T;

  while(true){
    if(age == M) break;
    if(age <= X) height -= D;
    age--;
  }

  cout << height << endl;

  return 0;
}
