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
int A[200];
int L[200];

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;

  for(int i = 0; i < K; i++){
    cin >> A[i];
  }

  int L;
  for(int i = 0; i < Q; i++){
    cin >> L;
    if(A[L-1] == N) continue;
    if(A[L-1] != A[L] - 1){
      A[L-1] = A[L-1] + 1;
    }
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
  for(int i = 0; i < K; i++){
    cout << A[i] << endl;
  }


  return 0;
}
