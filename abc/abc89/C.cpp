#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char s[100000][10];
	for(int i = 0; i < n; i++) cin >> s[i];
	long long m = 0, a = 0, r = 0, c = 0, h = 0;
	rep(i, n){
		switch(s[i][0]){
			case 'M': m++; break;
			case 'A': a++; break;
			case 'R': r++; break;
			case 'C': c++; break;
			case 'H': h++; break;
		}
	}
	long long ans = 0;
	ans += m * a * r;
	ans += m * a * c;
	ans += m * a * h;
	ans += m * r * c;
	ans += m * r * h;
	ans += m * c * h;
	ans += a * r * c;
	ans += a * r * h;
	ans += a * c * h;
	ans += r * c * h;

	cout << ans << endl;
	return 0;
}
