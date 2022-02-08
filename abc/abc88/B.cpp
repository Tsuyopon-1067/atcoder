#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());

	int alice = 0;
	int bob = 0;
	for(int i = n-1; 0 <= i; i--){
		alice += a[i];
		i--;
		if(i < 0) break;
		bob += a[i];
	}

	cout << alice - bob << endl;
	return 0;
}
