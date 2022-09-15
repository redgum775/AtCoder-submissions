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

int main(){
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  int t, x;
  ll P = 0;
  for(int i = 0; i < Q; i++){
    cin >> t >> x;
    if(t == 1){
      P += x;
    }
    if(t == 2){
      cout << S[(((x-1 - P) % N) + N) % N] << endl;
    }
  }

  return 0;
}

int LTE() {
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  vector<char> C;
  for(int i = S.size() - 1; i >= 0; i--){
    C.push_back(S[i]);
  }
  int t, x;
  char tmp;
  for(int i = 0; i < Q; i++){
    cin >> t >> x;
    if(t == 1){
      for(int j = 0; j < x; j++){
        tmp = C[0];
        C.erase(C.begin());
        C.push_back(tmp);
      }
    }else if(t == 2){
      cout << C[C.size() - x] << endl;
    }
  }

  return 0;
}
