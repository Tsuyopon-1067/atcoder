#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, a, b;
	cin >> x >> a >> b;
	int d1 = abs(x-a);
	int d2 = abs(x-b);

	cout << (d1 < d2 ? "A" : "B") << endl;;
	return 0;
}
