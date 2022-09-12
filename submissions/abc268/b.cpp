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
  string S, T;
  cin >> S >> T;

  if(S.size() == 0){
    cout << "Yes" << endl;
  }else if(S.size() <= T.size()){
    bool flg = true;
    for(int i = 0; i < S.size(); i++){
      if(S[i] != T[i]) flg = false;
    }
    cout << (flg ? "Yes":"No") << endl;
  }else{
    cout << "No" << endl;
  }
  
  return 0;
}
