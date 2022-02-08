#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int p[100000];
	for(int ii = 0; ii < n; ii++) cin >> p[ii];

	int ans = 0;
	rep(i, n){
		if(p[i] == i+1){
			ans++;
			i++;
		}
	}

	cout << ans << endl;
	return 0;
}
