//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  ll N, M;
  cin >> N >> M;

  vector<pair<ll, ll>> A(N);
  vector<pair<ll, ll>> B(M);

  for(int i = 0; i < N; i++) cin >> A[i].first;
  for(int i = 0; i < M; i++) cin >> B[i].first;

  ll a = 0;
  ll b = 0;
  ll idx = 1;

  while(true){
    if(A.size() == a){
      while(b < B.size()){
        B[b].second = idx;
        idx++;
        b++;
      }
      break;
    }else if(B.size() == b){
      while(a < A.size()){
        A[a].second = idx;
        idx++;
        a++;
      }
      break;
    }

    if(A[a].first < B[b].first){
      A[a].second = idx;
      a++;
    }else{
      B[b].second = idx;
      b++;
    }
    idx++;
  }

  for(auto& ans : A) cout << ans.second << " ";
  cout << endl;
  for(auto& ans : B) cout << ans.second << " ";
  cout << endl;

  return 0;
}
