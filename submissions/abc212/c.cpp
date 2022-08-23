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
  int N;
  int M;
  cin >> N >> M;
  ll A[N];
  ll B[M];

  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  for(int i = 0; i < M; i++){
    cin >> B[i];
  }

  sort(A, A+N);
  sort(B, B+M);

  int n = 0;
  int m = 0;
  ll min = 1000000000;
  while(true){
    ll tmp = abs(A[n] - B[m]);
    if(min > tmp){
      min = tmp;
      // cout << "A[n]: " << A[n] << "  B[m]: " << B[m] << endl;
    } 
    if(A[n] <= B[m]){
      n++;
    }else{
      m++;
    }
    if(N == n || M == m) break;
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << min << endl;

  return 0;
}
