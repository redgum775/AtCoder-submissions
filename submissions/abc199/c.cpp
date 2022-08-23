#include <iostream>
#include <string>
using namespace std;
 
int main(){
  int N, Q;
  string S;
  cin >> N >> S >> Q;

  int q1, q2, q3;
  int type = 0;
  for(int i = 0; i < Q; i++){
    cin >> q1 >> q2 >>q3;
    q2--;
    q3--;
    if(q1 == 1){
      if(type == 1){
        S = S.substr(N) + S.substr(0,N);
        type = 0;
      }
      char tmp = S[q2];
      S[q2] = S[q3];
      S[q3] = tmp;
    }else{
      type = (type + 1) % 2;
    }
    //cout << "idx[" << i << "] " << S << endl;
  }
  if(type == 1){
    S = S.substr(N) + S.substr(0,N);
  }
  cout << S << endl;
}
