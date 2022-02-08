#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	bool ans = false;
	if(s[0] == s[1] && s[0] == s[2]) ans = true;
	else if(s[1] == s[2] && s[2] == s[3]) ans = true;

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}
