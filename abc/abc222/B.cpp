#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p;
	cin >> n >> p;
	int ans = 0;

	rep(i, n){
		int a;
		cin >> a;
		if(a < p) ans++;
	}
	cout << ans << endl;
	return 0;
}
