#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int rsp(int m, int o){
	return (m-o+4)%3; //W:0 D:1 L:2
}
int rsp(char m, char o){
	map<char, int> mp;
	mp['G'] = 0;
	mp['C'] = 1;
	mp['P'] = 2;
	return rsp(mp[m], mp[o]);
}
int main() {
	int n, m, nn;
	cin >> n >> m;
	nn = 2*n;
	vector<vector<char>> a(nn, vector<char>(m));
	vector<vector<int>> k(nn, vector<int>(2, 0));//0列目は勝数, 1列目は個人番号

	rep(i, nn){
		k[i][1] = i;//個人番号セットしつつじゃんけんの手を読み取り
		rep(j, m) cin >> a[i][j];
	}

	rep(i, m){
		//じゃんけん判定
		rep(j, nn){
			int n1 = k[j][1];//j位の個人番号
			int n2 = k[j+1][1];
			char te1 = a[n1][i];
			char te2 = a[n2][i];
			if(rsp(te1, te2) == 0) k[j][0]++;
			else if(rsp(te2, te1) == 0) k[j+1][0]++;
			j++;
		}
		//勝数, 番号順にソート
		rep(j, nn){
			int maxIdx = j;
			reps(j, l, nn){
				if(k[maxIdx][0] < k[l][0]) maxIdx = l;
				if(k[maxIdx][0] == k[l][0] && k[maxIdx][1] > k[l][1]) maxIdx = l;
			}
			swap(k[maxIdx][0], k[j][0]);
			swap(k[maxIdx][1], k[j][1]);
		}
	}

	rep(i, nn) cout << k[i][1]+1 << endl;

	return 0;
}
