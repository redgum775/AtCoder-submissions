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

vector<int> a;
vector<int> b;

int main() {
  int A, B, M;
  cin >> A >> B >> M;
  int tmp;
  for(int i = 0; i < A; i++){
    cin >> tmp;
    a.push_back(tmp);
  }
  for(int i = 0; i < B; i++){
    cin >> tmp;
    b.push_back(tmp);
  }

  int x, y, c;
  int ans = 200000;
  for(int i = 0; i < M; i++){
    cin >> x >> y >> c;
    ans = min(a[x-1] + b[y-1] - c, ans);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ans = min(a[0] + b[0], ans);


  cout << ans << endl;

  return 0;
}
