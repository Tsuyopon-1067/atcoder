#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, m;
	cin >> n >> m;
	int a[200000];
	int b[200000];
	rep(i, m) cin >> a[i] >> b[i];

	int r[200000] = {false};
	int l[200000] = {false};
	bool ans = false;
	rep(i, m){
		if(b[i] == n) r[a[i]-1] = true;
		if(a[i] == 1) l[b[i]-1] = true;
	}
	rep(i, n){
		if(r[i] && l[i]){
			ans = true;
			break;
		}
	}

	if(!ans) cout << "IM";
	cout << "POSSIBLE" << endl;
	return 0;
}
