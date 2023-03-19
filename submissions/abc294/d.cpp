//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <queue>

using ll = long long;
typedef long long ll;
using llu = unsigned long long;
typedef unsigned long long llu;

using namespace std;

vector<int> wait;

bool p[500005];

int main() {
  int N, Q;
  cin >> N >> Q;

  int call = 1;
  int id = 1;
  int x = 1;

  for(int i = 0; i < Q; i++){
    int event;
    cin >> event;
    if(event == 1){
      p[id] = true;
      id++;
    }else if(event == 2){
      cin >> x;
      p[x] = false;
    }else if(event == 3){
      for(int j = call; j <= id; j++){
        if(p[j]){
          call = j;
          break;
        }    
      }
      cout << call << endl;
    }
  }

  return 0;
}
