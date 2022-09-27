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
  string S[10];
  for(int i = 0; i < 10; i++){
    cin >> S[i];
  }

  int A, B, C, D;
  A = 10;
  B = 0;
  C = 10;
  D = 0;
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(S[i][j] == '#'){
        A = min(A, i + 1);
        B = max(B, i + 1);
        C = min(C, j + 1);
        D = max(D, j + 1);
      }
    }
  }
  
  cout << A << " " << B << endl << C << " " << D << endl;

  return 0;
}
