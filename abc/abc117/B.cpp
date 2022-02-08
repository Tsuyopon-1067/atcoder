#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> l(n);
	for(int ii = 0; ii < n; ii++) cin >> l[ii];
	sort(l.begin(), l.end());
	int sum = 0;
	rep(i, n-1) sum+= l[i];
	cout << (sum > l[n-1] ? "Yes" : "No") << endl;
	return 0;
}
