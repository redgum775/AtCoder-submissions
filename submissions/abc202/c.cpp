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
  ll N;
  cin >> N;

  ll A[N+1] = {};
  ll B[N+1] = {};
  ll C[N+1] = {};
  ll tmp;

  for(ll i = 0; i < N; i++){
    cin >> tmp;
    A[tmp]++;
  }
  for(ll i = 0; i < N; i++) cin >> B[i];
  for(ll i = 0; i < N; i++) cin >> C[i];

  ll x[N+1] = {};

  for(ll j = 0; j < N; j++){
    x[B[C[j]-1]]++;
  }

  ll counter = 0;
  for(ll n = 0; n < N+1; n++){
    counter += A[n] * x[n];
    //cout << "n="<< n << "(" << A[n] << " : " << x[n] << ")" <<  endl; 
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << counter << endl;

  return 0;
}
