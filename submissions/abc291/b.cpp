//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <limits>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> score(N*5);
  for(int i = 0; i < N*5; i++) cin >> score[i];
  sort(score.begin(), score.end());

  double add = 0;
  for(int i = N; i < 5*N - N; i++){
    add += score[i];
  }

  double ans = add / (3 * N);

  cout << fixed << setprecision(10);

  cout << ans << endl;

  return 0;
}
