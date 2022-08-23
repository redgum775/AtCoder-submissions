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

  string card;
  cin >> card;

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  for(int n = 0; n < N; n++){
    if(card[n] == '1'){
      if(n % 2 == 0){
        cout << "Takahashi" << endl;
      }else{
        cout << "Aoki" << endl;
      }
      break;
    }
  }

  return 0;
}
