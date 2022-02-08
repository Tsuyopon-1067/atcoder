#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, x;
	cin >> a >> b >> x;
	int c = a + b;
	cout << (a <= x && x <= c ? "YES" : "NO") << endl;
	return 0;
}
