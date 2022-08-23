//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;

using namespace std;

int main() {
  ll N;
  int K;
  cin >> N >> K;

  for(int i = 0; i < K; i++){
    if(N % 200 == 0){
      N /= 200;
    }else{
      N = N * 1000 + 200;
    }
  }
  cout << N << endl;

  return 0;
}
