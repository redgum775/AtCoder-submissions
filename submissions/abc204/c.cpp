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

const int MAX_N=2000;

vector<vector<int>>G;
bool temp[MAX_N];
void dfs(int v){
	if(temp[v]) return; // 2回目以降の到達時，さらに奥を探索しない
	temp[v]=true;
	for(auto vv:G[v]) dfs(vv);  // さらに奥を探索
}

int main() {
  int N;
  int M;
  cin >> N >> M;
  
	G.resize(N);
	for(int i=0;i<M;i++){
		int a,b;
		cin >> a >> b;
		G[a-1].push_back(b-1);
	}
	int ans=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++) temp[j]=false; // i村スタートのとき，到達可能な村の数を格納する配列の初期化
		dfs(i); // 探索開始 iはスタートの村番号
		for(int j=0;j<N;j++) if(temp[j]) ans++; // i村スタートのとき到達可能な村の数
	}

  cout << ans << endl;

  return 0;
}
