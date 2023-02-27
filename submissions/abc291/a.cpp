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
  char camel[26];
  camel[0] = 'A';
  for(int i = 1; i < 26; i++){
    camel[i] = 'A'+i;
  }

  int ans = 0;
  for(int i = 0; i < S.size(); i++){
    for(char c : camel){
      if(S[i]==c) ans = i+1;
    }
  }

  cout << ans << endl;

  return 0;
}
