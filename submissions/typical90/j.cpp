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

// input
int N;
int C[100009], P[100009];
int Q;
int L[100009], R[100009];

// sum
int sum1[100009];
int sum2[100009];

int main(){
  cin >> N;
  for(int n = 1; n <= N; n++) cin >> C[n] >> P[n];

  cin >> Q;
  for(int q = 1; q <= Q; q++) cin >> L[q] >> R[q];

  for(int i = 1; i <= N; i++){
    sum1[i] = sum1[i-1];
    sum2[i] = sum2[i-1];
    if(C[i] == 1) sum1[i] += P[i];
    if(C[i] == 2) sum2[i] += P[i];
  }

  for(int i = 1; i <= Q; i++){
    int ans1 = sum1[R[i]] - sum1[L[i] - 1];
    int ans2 = sum2[R[i]] - sum2[L[i] - 1];
    cout << ans1 << " " << ans2 << endl;
  }

  return 0;
}
