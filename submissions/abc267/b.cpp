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

  bool split[7];
  split[0] = S[6] == '1';
  split[1] = S[3] == '1';
  split[2] = S[1] == '1' || S[7] == '1';
  split[3] = S[0] == '1' || S[4] == '1';
  split[4] = S[2] == '1' || S[8] == '1';
  split[5] = S[5] == '1';
  split[6] = S[9] == '1';

  if(S[0] == '1'){
    cout << "No" << endl;
    return 0;
  }
  for(int i = 0; i < 6; i++){
    if(split[i]){
      for(int j = i + 1; j < 7; j++){
        if(split[j]){
          for(int k = i + 1; k < j; k++){
            if(!split[k]){
              cout << "Yes" << endl;
              return 0;
            }
          }
        }
      }
    }
  }

  cout << "No" << endl;

  return 0;
}
