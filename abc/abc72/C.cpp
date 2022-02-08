#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int max4(int a, int b, int c, int d){
	a = max(a, b);
	a = max(a, c);
	a = max(a, d);
	return a;
}

int main() {
	int n;
	cin >> n;
	int a[100000];
	for(int ii = 0; ii < n; ii++) cin >> a[ii];

	int k[100001] = {0};
	rep(i, n) k[a[i]]++;

	int ans = 0;
	int t0 = 0, t1 = 0, t2 = 0;
	rep(i, 100001){
		switch (i % 3) {
			case 0:
				t0 = 0;
				break;
			case 1:
				t1 = 0;
				break;
			case 2:
				t2 = 0;
				break;
		}
		t0 += k[i];
		t1 += k[i];
		t2 += k[i];
		ans = max4(ans, t0, t1, t2);
	}
	cout << ans << endl;
	return 0;
}
