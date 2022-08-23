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
  int A;
  int B;
  cin >> A >> B;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  if(0 < A && B == 0){
    cout << "Gold" << endl;
  }else if(A ==0 && 0 < B){
    cout << "Silver" << endl;
  }else if(0 < A && 0 <B){
    cout << "Alloy" << endl;
  }

  return 0;
}
