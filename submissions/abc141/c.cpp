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

ll player[100005];
int main() {
  int N, Q;
  ll K;
  cin >> N >> K >> Q;

  int id;
  for(int i = 0; i < Q; i++){
    cin >> id;
    player[id]++;
  }

  for(int i = 1; i < N+1; i++){
    cout << ((K - Q + player[i] > 0) ? "Yes" : "No") << endl;
  }
  
  return 0;
}
