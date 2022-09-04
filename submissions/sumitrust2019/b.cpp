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

  int i = N / 1.1;
  int ans;
  while(true){
    ans = i * 1.08;
    if(ans == N){
      cout << i << endl;
      break;
    }
    if(ans > N){
      cout << ":(" << endl;
      break;
    }
    i++;
  }

  return 0;
}
