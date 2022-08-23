//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using ll = long long;
typedef long long ll;

using namespace std;

int main() {
  int N;
  cin >> N;

  string max_n;
  string second_n;
  int max_h = 0;
  int second_h = 0;

  for(int i = 0; i < N; i++){
    string S;
    int T;
    cin >> S >> T;

    if(second_h < T){
      if(max_h < T){
        second_n = max_n;
        second_h = max_h;
        max_n = S;
        max_h = T;
      }else{
        second_n = S;
        second_h = T;
      }
    }

  }

  cout << second_n << endl;

  return 0;
}
