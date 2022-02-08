#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<vector<int>> c(3, vector<int>(3));
	rep(i, 3)rep(j, 3) cin >> c[i][j];

	int a1, a2, a3, b1, b2, b3;
	bool ans = false;
	for(int a1 = 1; a1 <= 100; a1++){
		b1 = c[0][0] - a1;
		b2 = c[0][1] - a1;
		b3 = c[0][2] - a1;
		a2 = c[1][0] - b1;
		a3 = c[2][0] - b1;

		if(a2+b2!=c[1][1] || a2+b3!=c[1][2] || a3+b2!=c[2][1] || a3+b3 != c[2][2]) continue;
		ans = true;
	}

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}

