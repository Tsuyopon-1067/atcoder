#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> road(n);
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		road[a-1]++;
		road[b-1]++;
	}
	for(int i = 0; i < n; i++){
		cout << road[i] << endl;
	}
	return 0;
}
