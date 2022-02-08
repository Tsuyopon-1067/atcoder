#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, T;
	cin >> n >> T;
	vector<int> c(n);
	vector<int> t(n);
	rep(i, n) cin >> c[i] >> t[i];

	int min = 9999;
	rep(i, n){
		if(t[i] > T) continue;
		if(min > c[i]) min = c[i];
	}
	
	if(min == 9999) cout << "TLE" << endl;
	else cout << min << endl;
	return 0;
}
