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

ll room[100010];

int main() {
  ll N, M, T;
  cin >> N >> M >> T;

  ll tmp;
  ll time = 0;
  // �����ԍ�i���B�ɕK�v�Ȉړ��R�X�g���L�^
  for(int i = 2; i <= N; i++){
    cin >> tmp;
    time += tmp;
    room[i] = time;
  }

  ll X;
  ll Y;
  bool isClear = true;
  for(int i = 1; i <= M; i++){
    cin >> X >> Y;
    if(T <= room[X]){
      isClear = false;
    }
    T += Y;
  }
  if(T <= room[N]){
    isClear = false;
  }

//cout << fixed << setprecision(10); //�����_�ȉ��̏o�͌����̎w��

  cout << (isClear ? "Yes" : "No") << endl;

  return 0;
}
