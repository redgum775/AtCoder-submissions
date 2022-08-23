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
  string pwd;
  cin >> pwd;
  int tmp = stoi(pwd);
  int num[4];
  num[0] = tmp / 1000 % 10;
  num[1] = tmp / 100 % 10;
  num[2] = tmp / 10 % 10;
  num[3] = tmp % 10; 

  long before = num[0];
  bool a = false;
  bool b = false;
  for(int i = 1; i < 4; i++){
    if(before != num[i]) a = true;
    if((before + 1) % 10 != num[i] % 10) b = true;
    if(i != 3) before = num[i];
  }

  if(a && b){
    cout << "Strong" << endl;
  }else{
    cout << "Weak" << endl;
  }
  

  return 0;
}
