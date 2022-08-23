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
  int X;
  cin >> N >> X;

  for(int n = 1; n <= N; n++){
    int tmp;
    cin >> tmp;
    if(n % 2 ==0){
      X -= tmp - 1;
    }else{
      X -= tmp;
    }
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
  if(X < 0){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }

  return 0;
}
