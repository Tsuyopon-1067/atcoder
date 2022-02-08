#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
	int w, a, b;
	cin >> w >> a >> b;

	if(abs(b-a) <= w) cout << 0 << endl;
	else {
		int d1, d2;
		d1 = abs(b - a - w);
		d2 = abs(a - b - w);
		cout << min(d1, d2) << endl;
	}

	return 0;
}
