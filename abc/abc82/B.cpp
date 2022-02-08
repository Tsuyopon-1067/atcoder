#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	string s, t;
	cin >> s;
	cin >> t;
	vector<char> ss(s.length());
	vector<char> tt(t.length());
	rep(i, s.length()) ss[i] = s[i];
	rep(i, t.length()) tt[i] = t[i];


	sort(ss.begin(), ss.end());
	sort(tt.begin(), tt.end());
	reverse(tt.begin(), tt.end());


	if(ss < tt) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
