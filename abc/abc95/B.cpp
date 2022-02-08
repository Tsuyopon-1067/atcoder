#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, x;
	cin >> n >> x;
	int m = x;
	rep(i, n) {
		int temp;
		cin >> temp;
		x -= temp;
		m = min(temp, m);
	}
	
	int ans = n;
	x -= m;
	while(x >= 0){
		x -= m;
		ans++;
	}

	cout << ans << endl;
	
	return 0;
}
