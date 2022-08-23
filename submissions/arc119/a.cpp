//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using ll = long long;
typedef long long ll;

using namespace std;

ll pow_ll(ll x, ll n){
  if(n == 0)
    return 1;

  if(n % 2 == 0)
    return pow_ll(x * x, n / 2);
  else
    return x * pow_ll(x, n - 1);
}

int main() {
  ll N;
  cin >> N;

  ll m = N;
 
  ll a = 0;
  ll b = 0;
  ll c = 0;
  while(true){
    if(pow_ll(2,b) >= N){
      break;
    }
    a = N / pow_ll(2,b);
    c = N - a * pow_ll(2,b);

    m = min(m, a+b+c);

    b++;
  }

  cout << m << endl;
  
  return 0;
}

