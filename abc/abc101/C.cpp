#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	if(n <= k){
		cout << 1 << endl;
		return 0;
	}
	cout << (n+k-3)/(k-1) << endl;

	return 0;
}
