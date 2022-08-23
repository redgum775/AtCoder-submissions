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

  ll count = 0;
  ll tmp;

  for(int n = 0; n < N; n++){
    cin >>tmp;
    if(tmp > 10){
      count += tmp - 10;
    }
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << count << endl;

  return 0;
}
