#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;

	double ans;
	double x;
	string u;
	rep(i, n){
		cin >> x >> u;
		if(u == "BTC") x *= 380000;
		ans += x;
	}
	cout << ans << endl;
	return 0;
}
