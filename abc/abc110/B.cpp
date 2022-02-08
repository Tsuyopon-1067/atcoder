#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	vector<int> xx(n);
	vector<int> yy(m);
	rep(i, n) cin >> xx[i];
	rep(i, m) cin >> yy[i];
	sort(xx.begin(), xx.end());
	sort(yy.begin(), yy.end());

	bool ans = false;
	for(int i = x+1; i <= y; i++){
		if(xx[n-1] < i && i <= yy[0]){
			ans = true;
			break;
		}
	}

	cout << (ans ? "No War" : "War") << endl;

	return 0;
}
