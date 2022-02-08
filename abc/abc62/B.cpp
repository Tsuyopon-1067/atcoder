#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<char>> a(h, vector<char>(w));
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < w+2; i++){
		putchar('#');
	}
	putchar('\n');
	for(int i = 0; i < h; i++){
		putchar('#');
		for(int j = 0; j < w; j++){
			putchar(a[i][j]);
		}
		putchar('#');
		putchar('\n');
	}
	for(int i = 0; i < w+2; i++){
		putchar('#');
	}
	return 0;
}
