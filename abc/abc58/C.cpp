#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<string> s(n);
	for(int ii = 0; ii < n; ii++) cin >> s[ii];
	int k[50][26] = {0};
	rep(i, n){
		rep(j, s[i].size()) k[i][s[i][j] - 'a']++;
	}

	int kk[26];
	rep(i, 26){
		int t = 99999999;
		rep(j, n){
			t = min(t, k[j][i]);
		}
		kk[i] = t;
	}
	
	string ans;
	rep(i, 26){
		rep(j, kk[i]) ans += i+'a';
	}
	cout << ans << endl;
	return 0;
}
