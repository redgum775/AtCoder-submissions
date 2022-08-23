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
  string S;
  cin >> S;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
  string out_str = "";
  for(int i = S.size() - 1; i >= 0; i--){
    switch (S[i]){
      case '0':
        out_str += "0";
        break;
      
      case '1':
        out_str += "1";
        break;
      
      case '6':
        out_str += "9";
        break;
      
      case '8':
        out_str += "8";
        break;
      
      case '9':
        out_str += "6";
        break;
    }
  }

  cout << out_str << endl;

  return 0;
}
