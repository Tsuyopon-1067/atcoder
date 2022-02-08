#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	bool flug = false;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(s[i] == s[j]){
				flug = true;
				i = 999;
				break;
			}
		}
	}

	if (flug) cout << "no" << endl;
	else cout << "yes" << endl;
	return 0;
}
