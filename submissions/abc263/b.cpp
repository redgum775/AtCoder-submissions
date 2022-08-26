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

int P[52];

int search(int n){
  if(n == 1) return 1;
  return search(P[n]) + 1;
}

int main() {
  int N;
  cin >> N;

  for(int i = 2; i <= N; i++){
    cin >> P[i];
  }

  cout << search(P[N]) << endl;

  return 0;
}
