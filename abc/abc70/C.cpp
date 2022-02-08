#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	long long ans;
	cin >> ans;
	rep(i, n-1){
		long long temp;
		cin >> temp;
		ans = lcm(ans, temp);
	}
	cout << ans << endl;
	return 0;
}
