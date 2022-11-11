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
  ll A, B, C;
  cin >> A >> B >> C;
  ll ans = 0;
  ll startA = A, startB = B, startC = C;
  ll tmpA, tmpB, tmpC;
  while(A%2==0 && B%2==0 && C%2==0){
    tmpA = A;
    tmpB = B;
    tmpC = C;
    A = tmpB/2 + tmpC/2;
    B = tmpA/2 + tmpC/2;
    C = tmpA/2 + tmpB/2;
    // cout << "A: " << A << "\tB: " << B << "\tC: " << C << endl;
    ans++;
    
    if(startA == A && startB == B && startC == C){
      ans = -1;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
