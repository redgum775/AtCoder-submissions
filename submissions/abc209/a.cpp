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
  int A;
  int B;
  cin >> A >> B;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
  int ans = B-A+1;
  if(ans < 0){
    cout << 0 << endl;
  }else{
    cout << ans << endl;

  }

  return 0;
}
