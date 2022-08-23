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
bool used[2005];

int main() {
  int N;
  cin >> N;
  while(1){
    for(int i = 1; i <= 2*N+1; i++){
      if(!used[i]){
        cout << i << endl;
	      used[i] = true;
        break;
      }
    }
    
    int res;
    cin >> res;
    if(res == 0) break;
    used[res] = true;
  }
  return 0;
}
