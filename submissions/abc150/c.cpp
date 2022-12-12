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

vector<int> P;
vector<int> Q;
int main() {
  int N;
  cin >> N;
  int tmp;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    P.push_back(tmp);
  }
  for(int i = 0; i < N; i++){
    cin >> tmp;
    Q.push_back(tmp);
  }
  

  int numP = 0;
  do {
    numP++;
  } while (prev_permutation(P.begin(), P.end()));
  int numQ = 0;
  do {
    numQ++;
  } while (prev_permutation(Q.begin(), Q.end()));

  cout << abs(numP - numQ) << endl;

  return 0;
}
