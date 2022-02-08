#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	int re = 0;
	int rw = 0;
	rep(i, n){
		if(s[i] == 'E') re++;
		else rw++;
	}

	int le = 0;
	int lw = 0;
	int ans = 300000;
	rep(i, n){
		if(s[i] == 'E'){
			re--;
			ans = min(ans, re+lw);
			le++;
		}else{
			rw--;
			ans = min(ans, re+lw);
			lw++;
		}
	}
	cout << ans << endl;
	return 0;
}
