#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a(3);
	for(int ii = 0; ii < 3; ii++) cin >> a[ii];
	sort(a.begin(), a.end());
	cout << (a[2]-a[1] == a[1]-a[0] ? "Yes" : "No") << endl;

	return 0;
}
