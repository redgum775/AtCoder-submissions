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

int steps[100005];
int main() {
  int N, M, X;
  vector<int> A;
  cin >> N;
  for(int i = 0; i < N; i++){
    int step;
    cin >> step;
    A.push_back(step);
  }
  cin >> M;
  for(int i = 0; i < M; i++){
    int stop;
    cin >> stop;
    steps[stop] = -1;
  }
  cin >> X;

  steps[0] = 1;
  for(int i = 0; i < X; i++){
    for(int j : A){
      if(i+j > X) continue;
      if(steps[i] == 1 && steps[i+j] != -1) steps[i+j] = 1;
    }
  }

  cout << (steps[X] == 1 ? "Yes" : "No") << endl;

  return 0;
}
