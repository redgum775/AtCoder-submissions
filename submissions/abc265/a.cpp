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
  int X, Y, N;
  cin >> X >> Y >> N;

  int money = 0;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
if(X*3 > Y){
  money = X * (N % 3) + Y * (N / 3); 
}else{
  money = X * N;
}

  cout << money << endl;

  return 0;
}
