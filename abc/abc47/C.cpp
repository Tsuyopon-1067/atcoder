#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool isAll(string s, int n, char c){
	bool res = true;
	rep(i, n){
		if(s[i] != c){
			res = false;
			break;
		}
	}
	return res;
}

int main() {
	string s;
	cin >> s;
	int n = s.size();
	if(isAll(s, n, 'W')){
		cout << 0 << endl;
		return 0;
	}
	if(isAll(s, n, 'B')){
		cout << 0 << endl;
		return 0;
	}

	int ans = 0;
	if(s[0] != 'W'){
		ans++;
		int i = 0;
		while(s[i] != 'W'){
			s[i] = 'W';
			i++;
		}
	}
	if(s[n-1] != 'W'){
		ans++;
		int i = n-1;
		while(s[i] != 'W'){
			s[i] = 'W';
			i--;
		}
	}
	int bn = 0;
	rep(i, n){
		if(s[i] == 'B') bn++;
	}

	while(bn > 0){
		int b = 0;//B L edge
		while(s[++b] == 'W');
		while(s[b] == 'B') {
			s[b++] = 'W';
			bn--;
		}
		ans += 2;
	}

	cout << ans << endl;
	return 0;
}
