#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void digit(int n, int x[]){
	x[0] = n%10;
	for(int i = 1; i < 4; i++){
		n /= 10;
		x[i] = n % 10;
	}
}
bool existNum(int n, int x[]){
	bool res = false;
	rep(i, 4){
		if(x[i] == n) res = true;
	}
	return res;
}
int main() {
	string s;
	cin >> s;

	int ans = 0;
	int d[4] = {0};
	rep(i, 10000){
		bool flug = true;
		digit(i, d);
		rep(j, 10){
			switch(s[j]){
				case 'o':
					if(!existNum(j, d)) flug = false;
					break;
				case 'x':
					if(existNum(j, d)) flug = false;
			}
		}
		if(flug) ans++;
	}


	cout << ans << endl;

	return 0;
}
