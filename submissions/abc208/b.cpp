//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

ll factorial(int n) 
{
    if (n == 0)
       return 1;
    return n * factorial(n - 1);
}

using namespace std;

int main() {
  ll P;
  cin >> P;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è
ll count = 0;
  for(int x = 10; x > 0; x--){
    if(P == 0) break;
    int num = P / factorial(x);
    if(num < 100){
      P -= num * factorial(x);
      count += num;
    }else{
      P -= 100 * factorial(x);
      count += 100;
    }
  }
  cout << count << endl;

  return 0;
}
