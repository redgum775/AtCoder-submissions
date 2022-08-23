#include <iostream>
#include <string>
#include <vector>
//#include <math.h>       /* tan */
#include <cmath>
#include <algorithm>    // std::max

using namespace std;

int main(){
  int N;
  long D;
  long H;
  cin >> N >> D >> H;

  vector<vector<long>> q(N,vector<long>(2));
  for(int i = 0; i < N; i++){
    cin >> q[i][0] >> q[i][1];
  }

  double max = 0;
  for(auto h : q){
    double angle = atan2((H - h[1]), (D - h[0]));

    double t = D * tan(angle);
    double tmp = H - t;
    if(max < tmp){
      max = tmp;
    }
  }

  cout << max << endl;

  return 0;
}
