#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	rep(i, h) cin >> s[i];
	int d[3] = {-1, 0, 1};

	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			if(s[i][j] == '#') continue;
			int mine = 0;
			for(int k: d){
				for(int l: d){
					if(k == 0 && l == 0) continue;
					if(0 <= i+k && i+k < h && 0 <= j+l && j+l < w){
						if(s[i+k][j+l] == '#') mine++;
					}
				}
			}
			s[i][j] = mine + '0';
		}
	}

	rep(i, h){
		rep(j, w) cout << s[i][j];
		cout << '\n';
	}
	return 0;
}
