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
vector<vector<int>> points;
int A[1005];
int B[1005];
bool isPassed[1005];

int main(){
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  for(int i = 1; i <= N; i++) cin >> A[i];
  for(int i = 1; i <= N; i++) cin >> B[i];

  for(int i = 0; i < X; i++){
    int pos = 0;
    for(int j = 1; j <= N; j++) if(!isPassed[j]){
      if(pos==0 || A[j]>A[pos])pos=j;
    }
    isPassed[pos] = true;
  }

  for(int i = 0; i < Y; i++){
    int pos = 0;
    for(int j = 1; j <= N; j++) if(!isPassed[j]){
      if(pos==0 || B[j]>B[pos])pos=j;
    }
    isPassed[pos] = true;
  }

  for(int i = 0; i < Z; i++){
    int pos = 0;
    for(int j = 1; j <= N; j++) if(!isPassed[j]){
      if(pos==0 || A[j]+B[j]>A[pos]+B[pos])pos=j;
    }
    isPassed[pos] = true;
  }
  for(int i = 1; i <= N; i++)if(isPassed[i]) cout << i << endl;
  return 0;
}

int wa() {
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;

  for(int i = 1; i <= N; i++){
    cin >> A[i];
  }
  for(int i = 1; i <= N; i++){
    cin >> B[i];
    points.push_back({i, A[i], B[i], A[i] + B[i]});
  }

  if(X != 0){
    sort(points.begin(),points.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] < beta[0];});
    sort(points.begin(),points.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[1] > beta[1];});
  }
  for(auto point : points){
    cout << "id: " << point[0] << "\tA: " << point[1] << "/tB: " << point[2] << "\tA+B: " <<  point[3] << endl;
  }
  for(int i = 0; i < X; i++){
    isPassed[points[0][0]] = true;
    // cout << points[0][1] << endl;
    // cout << "X: " << i << endl;
    points.erase(points.begin());
  }

  if( Y != 0){
    sort(points.begin(),points.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] < beta[0];});
    sort(points.begin(),points.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[2] > beta[2];});
  }
  for(int i = 0; i < Y; i++){
    isPassed[points[0][0]] = true;
    // cout << points[0][2] << endl;
    // cout << "Y: " << i << endl;
    points.erase(points.begin());
  }

  if(Z != 0){
    sort(points.begin(),points.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] < beta[0];});
    sort(points.begin(),points.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[3] > beta[3];});
  }
  for(int i = 0; i < Z; i++){
    isPassed[points[0][0]] = true;
    // cout << points[0][3] << endl;
    // cout << "Z: " << i << endl;
    points.erase(points.begin());
  }

  int count = 0;
  for(int i = 1; i <= N; i++){
    if(isPassed[i]){
      cout << i << endl;
      count++;
    }
  }
  // cout << "pass: " << count << endl;
  return 0;
}
