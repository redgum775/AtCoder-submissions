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
	if(temp[v]) return; // 2��ڈȍ~�̓��B���C����ɉ���T�����Ȃ�
	temp[v]=true;
	for(auto vv:G[v]) dfs(vv);  // ����ɉ���T��
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
		for(int j=0;j<N;j++) temp[j]=false; // i���X�^�[�g�̂Ƃ��C���B�\�ȑ��̐����i�[����z��̏�����
		dfs(i); // �T���J�n i�̓X�^�[�g�̑��ԍ�
		for(int j=0;j<N;j++) if(temp[j]) ans++; // i���X�^�[�g�̂Ƃ����B�\�ȑ��̐�
	}

  cout << ans << endl;

  return 0;
}
