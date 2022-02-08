#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int mand(int a, int b, int c, int d){
	return abs(c - a) + abs(d - b);
}
int main() {
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(m);
	vector<int> d(m);
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	for(int i = 0; i < m; i++){
		cin >> c[i] >> d[i];
	}

	for(int i = 0; i < n; i++){
		int jj = 0;
		for (int j = 0; j < m; j++) {
			int min = mand(a[i], b[i], c[jj], d[jj]);
			int temp = mand(a[i], b[i], c[j], d[j]);
			if(min > temp) jj = j;
		}
		printf("%d\n", jj + 1);
	}

	
	return 0;
}
