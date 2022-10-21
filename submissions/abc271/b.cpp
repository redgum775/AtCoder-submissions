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

vector<vector<int>> L;

int main() {
  int N, Q, S, T;
  int LN, QN;
  int num;
  cin >> N >> Q;
  for(int i = 0; i < N; i++){
    cin >> LN;
    vector<int> tmp;
    for(int j = 0; j < LN; j++){
      cin >> num;
      tmp.push_back(num);
    }
    L.push_back(tmp);
  }
  for(int i = 0; i < Q; i++){
    cin >> S >> T;
    cout << L[S-1][T-1] << endl;
  }

  return 0;
}
