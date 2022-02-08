#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int a, b, c, x;
	cin >> a >> b >> c >> x;
	a++;
	b++;
	c++;
	int ans = 0;
	rep(i, a)rep(j, b)rep(k, c){
		if(500*i + 100*j + 50*k == x) ans++;
	}

	cout << ans << endl;
	return 0;
}
