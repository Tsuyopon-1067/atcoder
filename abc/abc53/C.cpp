#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x;
	cin >> x;
	long long t = x / 11;
	int r = x % 11;
	if(r == 0) cout << 2*t << endl;
	else if(r <= 6) cout << 2*t + 1 << endl;
	else cout << t*2 + 2 << endl;
	return 0;
}
