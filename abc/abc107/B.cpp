#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<char>> a(h, vector<char>(w));
	rep(i, h)rep(j,w) cin >> a[i][j];

	int count = 0;
	rep(i, h){//y
		bool flug = true;
		rep(j, w){//x
			if(a[i][j] == '#') flug = false;
		}
		if(flug){
			for(int j = i; j < h-1; j++){
				rep(k, w) a[j][k] = a[j+1][k];
			}
			i--;
			h--;
		}
	}
	count = 0;

	rep(i, w){//y
		bool flug = true;
		rep(j, h){//x
			if(a[j][i] == '#') flug = false;
		}
		if(flug){
			for(int j = i; j < w-1; j++){
				rep(k, h) a[k][j] = a[k][j+1];
			}
			i--;
			w--;
		}
	}

	rep(i, h){
		rep(j, w) cout << a[i][j];
		cout << endl;
	}
	return 0;
}
