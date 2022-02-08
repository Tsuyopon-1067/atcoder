#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));

	for(int i = 0; i < n; i++){
		for(int i = 0; i < n; i++){
			cin >> a[i][j];
		}
	}
	vector<int> hsum(h);
	vector<int> wsum(w);
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			hsum.at(i) += a.at(i).(j);
		}
	}
	for(int i = 0; i < w; i++){
		for(int j = 0; j < h; j++){
			wsum.at(i) += a.at(j).(i);
		}
	}

	vector<vector<int>> b(h, vector<int>(w));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
		}
	}
	return 0;
}
