#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	string t;
	cin >> s;
	cin >> t;
	
	string ss = s;
	bool ans = false;
	int n = s.size();
	if(s == t) ans = true;
	rep(i, n-1){
		s = ss;
		swap(s[i], s[i+1]);
		if(s == t) ans = true;
	}

	cout << (ans ? "Yes" : "No") << endl;

	return 0;
}
