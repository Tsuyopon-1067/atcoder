#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int x[4];
	rep(i, 4) x[i] = s[i] - '0';

	bool ans = true;
	rep(i, 3){
		if(x[i+1] - x[i] != 1) ans = false;
	}
	if(s == "7890" || s == "8901" || s == "9012") ans = true;
	if(x[0] == x[1] && x[0] == x[2] && x[0] == x[3]) ans = true;
	cout << (ans ? "Weak" : "Strong") << endl;

	return 0;
}
