#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;

	int b[200000];
	int a1 = n/2;
	cin >> b[a1];

	int sign = (n % 2 == 0 ? -1 : 1);
	int sign2;
	for(int i = 2; i <= n; i++){
		sign2 = (i % 2 == 0 ? 1 : -1);
		cin >> b[a1 + sign*sign2*i/2];
	}
	rep(i, n) printf("%d ", b[i]);
	cout << endl;
	return 0;
}
