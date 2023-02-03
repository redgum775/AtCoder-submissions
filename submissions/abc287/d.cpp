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

bool match_or_not(char a, char b){
	return a=='?' || b=='?' || a==b;
}

int main() {
  string S, T;
  cin >> S >> T;

  vector<bool> pre(S.size()+1, false), suf(S.size()+1, false);
  pre[0] = true;
  suf[0] = true;
  for(ll i = 0; i < T.size(); i++){
    if(!match_or_not(S[i], T[i])) break;
    pre[i+1] = true;
  }

  for(ll i = 0; i < T.size(); i++){
    if(!match_or_not(S[S.size() - 1 - i], T[T.size() -1 - i])) break;
    suf[i+1] = true;
  }
    
  for(int i = 0; i <= T.size(); i++){
      cout << (pre[i] && suf[T.size() - i] ? "Yes" : "No") << endl;
  }

  return 0;
}
