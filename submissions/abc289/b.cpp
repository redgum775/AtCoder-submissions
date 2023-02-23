//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> ans;
  vector<int> a(M);
  vector<int> re(N+1);
  for(auto& x : a) cin >> x;
  for(auto& x : a) re[x]=1;

  for(int i = 1, j = 1; i <= N; i = ++j){
    while(re[j]) j++;
    for(int k = j; k >= i; k--) ans.push_back(k);
  }
  for(int a : ans) cout << a << endl;

  return 0;
}
