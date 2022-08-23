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
  int x;
  int y;
  cin >> x >> y;
  int z;

  if(x == y){
    z = x;
  }else if(x == 0 && y == 1 || x == 1 && y == 0){
    z = 2;
  }else if(x == 1 && y == 2 || x == 2 && y == 1){
    z = 0;
  }else if(x == 0 && y == 2 || x == 2 && y == 0){
    z = 1;
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << z << endl;

  return 0;
}
