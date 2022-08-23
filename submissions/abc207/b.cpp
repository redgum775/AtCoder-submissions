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
  ll A;
  ll B;
  ll C;
  ll D;

  cin >> A >> B >> C >> D;

  ll blue = A;
  ll red = 0;

  ll count = 0;
  if(B < C * D){
    while(1){
      if(blue <= red * D) break;
      blue += B;
      red += C;
      count++;
    }
  }else{
    count = -1;
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
  cout << count << endl;
  
  return 0;
}
