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
  cin >> N;

  int A[N];

  for(int n = 0; n < N; n++) cin >> A[n];

  sort(A, A+N);

  string flg = "Yes";

  for(int n = 0; n < N; n++){
    if(A[n] != n+1){
      flg = "No";
      break;
    }
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << flg << endl;

  return 0;
}
