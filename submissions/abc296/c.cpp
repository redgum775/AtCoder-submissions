//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  int N , X;
  cin >> N >> X;
  vector<int> A(N);
  for(int &a : A) cin >> a;
  sort(A.begin(), A.end());

  int i = 0, j = 0;
  bool ans = false;

  while(i < N || j < N){
    if(A[i] - A[j] == X){
      ans = true;
      break;
    }
    if(A[i] - A[j] < X) i++;
    if(A[i] - A[j] > X) j++;
  }

  cout << (ans ? "Yes" : "No") << endl;

  return 0;
}
