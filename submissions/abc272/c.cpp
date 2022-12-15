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

  ll num;
  vector<ll> evenNum;
  vector<ll> oddNum;
  for(int i = 0; i < N; i++){
    cin >> num;
    if(num % 2 == 0){
      evenNum.push_back(num);
    }else{
      oddNum.push_back(num);
    }
  }
  sort(evenNum.begin(), evenNum.end());
  sort(oddNum.begin(), oddNum.end());

  ll ans = -1;
  if(evenNum.size() >= 2 && oddNum.size() >= 2){
    ans = max(evenNum[evenNum.size()-1]+evenNum[evenNum.size()-2], oddNum[oddNum.size()-1]+oddNum[oddNum.size()-2]);
  }else if(evenNum.size() >= 2){
    ans = evenNum[evenNum.size()-1]+evenNum[evenNum.size()-2];
  }else if(oddNum.size() >= 2){
    ans = oddNum[oddNum.size()-1]+oddNum[oddNum.size()-2];
  }

  cout << ans << endl;

  return 0;
}
