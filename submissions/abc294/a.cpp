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
  int N;
  cin >> N;

  vector<int> num;
  for(int i = 0; i < N; i++){
    int tmp;
    cin >> tmp;
    if(tmp % 2 == 0) num.push_back(tmp);
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  for(auto& n : num) cout << n << " ";
  cout << endl;

  return 0;
}
