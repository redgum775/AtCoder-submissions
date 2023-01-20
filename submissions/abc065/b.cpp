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

int A[100005];

int main() {
  int N;
  cin >> N;
  for(int i = 1; i <= N; i++){
    cin >> A[i];
  }

  int count = 1;
  int ans;
  int push = A[1];
  while(true){
    if(push == 2){
      ans = count;
      break;
    }
    push = A[push];
    count++;
    if(count > N){
      ans = -1;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
