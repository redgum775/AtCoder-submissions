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

ll A[200010];

int main(){
  int N;
  ll P, Q, R;
  cin >> N >> P >> Q >> R;

  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  int y=0, z=0, w=0;
  ll s0=0, s1=0,s2=0;
  bool ac = false;

  for(int x = 0; x < N; x++){
    while(y < N && s0 < P){
      s0 += A[y];
      s1 -= A[y];
      y += 1;
    }
    while(z < N && s1 < Q){
      s1 += A[z];
      s2 -= A[z];
      z += 1;
    }
        while(w < N && s2 < R){
      s2 += A[w];
      w += 1;
    }
    if(s0==P && s1==Q && s2==R){
      ac = true;
      break;
    }
    s0 -= A[x];
  }

  cout << (ac ? "Yes" : "No");
  return 0;
}


// LTS
int ans_1() {
  int N;
  ll P, Q, R;
  cin >> N >> P >> Q >> R;

  ll tmp;
  cin >> A[0];
  for(int i = 1; i < N; i++){
    cin >> tmp;
    A[i] = tmp + A[i - 1];
  }

  bool ac = false;

  for(int x = 0; x <= N - 3; x++){
    for(int y = x + 1; y <= N - 2; y++){
      if(x != 0 && A[y-1] - A[x-1] > P) break;
      for(int z = y + 1; z <= N - 1; z++){
        if(A[z-1] - A[y-1] > Q) break;
        for(int w = z + 1; w <= N; w++){
          if(A[w-1] - A[z-1] > R) break;
          if(x==0){
            if(A[y-1]==P && A[z-1]-A[y]==Q && A[w-1]-A[z]==R) ac = true;
          }
          if(A[y-1]-A[x-1]==P && A[z-1]-A[y-1]==Q && A[w-1]-A[z-1]==R) ac = true;
          //cout << "P? " << A[y-1]-A[x] << "\tQ? " << A[z-1]-A[y] << "\tR? >" << A[w-1]-A[z] << endl;
          if(ac) break;
        }
        if(ac) break;
      }
      if(ac) break;
    }
    if(ac) break;
  }

//cout << fixed << setprecision(10); //¬”“_ˆÈ‰º‚Ìo—ÍŒ…”‚ÌŽw’è

  cout << (ac ? "Yes" : "No") << endl;
  /* 
  cout << "P? " << A[3-1]-A[1-1] << "\tQ? " << A[6-1]-A[3-1] << "\tR? " << A[8-1]-A[6-1] << endl;
  for(int i = 0; i < N; i++){
    cout << A[i] << ",";
  }
  cout << endl;
  */
  return 0;
}
