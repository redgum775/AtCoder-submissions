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
  int K, N;
  cin >> K >> N;

  int max_distance = 0;
  int tmp = 0;
  int pos = 0;
  int head = 0;
  for(int i = 0; i < N; i++){
    cin >> pos;
    if(i == 0){
      head = pos;
    }else{
      max_distance = max(max_distance, pos - tmp );
    }
    tmp = pos;
  }
  max_distance = max(max_distance, K - pos + head);


  cout << K - max_distance << endl;

  return 0;
}
