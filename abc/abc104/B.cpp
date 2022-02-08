#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();

	bool ans = true;
	if(s[0] != 'A') ans = false;

	int c = 0;
	int idx = 0;
	for(int i = 2; i < n-1; i++){
		if(s[i] == 'C'){
			c++;
			idx = i;
		}
	}
	if(c != 1) ans = false;

	for(int i = 1; i < n; i++){
		if(i == idx) continue;
		if(s[i] < 'a' || 'z' < s[i]) ans = false;
	}

	cout << (ans ? "AC" : "WA") << endl;
	return 0;
}
