#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, m;
	cin >> n >> m;
	if(n > m) swap(n, m);
	long long ans;
	if(n >= 2 && m >= 2) ans = (m-2)*(n-2);
	else if(n == 1 && m >= 2) ans = m - 2;
	else ans = 1;

	cout << ans << endl;
	return 0;
}
