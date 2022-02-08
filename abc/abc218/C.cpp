#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	char s[200][200];
	rep(i, n)rep(j, n) cin >> s[i][j];
	char t[200][200];
	rep(i, n)rep(j, n) cin >> t[i][j];
	

	int sx1 = 0, sx2 = 0, sy1 = 0, sy2 = 0;
	rep(i, n)rep(j, n){
		if(s[i][j] == '#') {
			sy1 = i;
			i = n;
			break;
		}
	}
	rep(i, n)rep(j, n){
		if(s[j][i] == '#') {
			sx1 = i;
			i = n;
			break;
		}
	}
	rep(i, n)rep(j, n){
		if(s[n-1-i][n-1-j] == '#') {
			sy2 = n-1-i;
			i = n;
			break;
		}
	}
	rep(i, n)rep(j, n){
		if(s[n-1-j][n-1-i] == '#') {
			sx2 = n-1-i;
			i = n;
			break;
		}
	}
	
	int tx1 = 0, tx2 = 0, ty1 = 0, ty2 = 0;
	rep(i, n)rep(j, n){
		if(t[i][j] == '#') {
			ty1 = i;
			i = n;
			break;
		}
	}
	rep(i, n)rep(j, n){
		if(t[j][i] == '#') {
			tx1 = i;
			i = n;
			break;
		}
	}
	rep(i, n)rep(j, n){
		if(t[n-1-i][n-1-j] == '#') {
			ty2 = n-1-i;
			i = n;
			break;
		}
	}
	rep(i, n)rep(j, n){
		if(t[n-1-j][n-1-i] == '#') {
			tx2 = n-1-i;
			i = n;
			break;
		}
	}

	bool ans = true;
	for(int i = sy1; i <= sy2; i++){
		for(int j = sx1; j <= sx2; j++){
			if(s[i][j] != t[i+ty1-sy1][j+tx1-sx1]) ans = false;
		}
	}
	if(ans){
		cout << "Yes" << endl;
		return 0;
	}

	rep(l, 4){
		char tt[200][200];
		ans = true;
		rep(i, n)rep(j, n){
			tt[i][j] = t[i][j];
		}
		rep(i, n)rep(j, n){
			t[i][j] = tt[j][n-i-1];
		}

		rep(i, n)rep(j, n){
			if(s[i][j] == '#') {
				sy1 = i;
				i = n;
				break;
			}
		}
		rep(i, n)rep(j, n){
			if(s[j][i] == '#') {
				sx1 = i;
				i = n;
				break;
			}
		}
		rep(i, n)rep(j, n){
			if(s[n-1-i][n-1-j] == '#') {
				sy2 = n-1-i;
				i = n;
				break;
			}
		}
		rep(i, n)rep(j, n){
			if(s[n-1-j][n-1-i] == '#') {
				sx2 = n-1-i;
				i = n;
				break;
			}
		}
		
		rep(i, n)rep(j, n){
			if(t[i][j] == '#') {
				ty1 = i;
				i = n;
				break;
			}
		}
		rep(i, n)rep(j, n){
			if(t[j][i] == '#') {
				tx1 = i;
				i = n;
				break;
			}
		}
		rep(i, n)rep(j, n){
			if(t[n-1-i][n-1-j] == '#') {
				ty2 = n-1-i;
				i = n;
				break;
			}
		}
		rep(i, n)rep(j, n){
			if(t[n-1-j][n-1-i] == '#') {
				tx2 = n-1-i;
				i = n;
				break;
			}
		}

		ans = true;
		for(int i = sy1; i <= sy2; i++){
			for(int j = sx1; j <= sx2; j++){
				if(s[i][j] != t[i+ty1-sy1][j+tx1-sx1]) ans = false;
			}
		}
		if(ans){
			cout << "Yes" << endl;
			return 0;
		}
		ans = true;
	}


	cout << "No" << endl;
}
