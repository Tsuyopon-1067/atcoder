#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, m;

	cin >> n;
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	cin >> m;
	vector<string> t(m);
	rep(i, m) cin >> t[i];


	int ans = 0;
	rep(i, n){
		int tempi = 0;
		rep(j, n){
			if(s[i] == s[j]) tempi++;
		}
		rep(j, m){
			if(s[i] == t[j]) tempi--;
		}
		if(ans < tempi) ans = tempi;
	}

	cout << ans << endl;
	return 0;
}
