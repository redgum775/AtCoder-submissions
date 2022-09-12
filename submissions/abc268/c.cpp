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
  int N;
  cin >> N;
	vector<int> P(N);
  for(int i = 0; i < N; i++) cin >> P[i];
  vector<int> counts(N, 0);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < 3; j++){
      counts[(P[i]-1-i+j+N)%N]++;
    }
  }
  int ans = 0;
  for(int count : counts) ans = max(ans, count);
  cout << ans << endl;
}

int TLE() {
  int N;
  cin >> N;
  int tmp;
  vector<int> P;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    P.push_back(tmp);
  }
  int ans = 0;
  int count = 0;
  for(int _ = 0; _ < N; _++){
    count = 0;
    for(int i = 0; i < N; i++){
      if(P[i] == (i) % N || P[i] == (i+1) % N || P[i] == (i+2) % N ) count++;
    }
    ans = max(ans, count);
    tmp = P[0];
    P.erase(P.begin());
    P.push_back(tmp);
  }

  cout << ans << endl;

  return 0;
}
