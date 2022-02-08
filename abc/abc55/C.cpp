#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, m;
	cin >> n >> m;

	int ans;
	if(n > m/2) cout << m/2 << endl;
	else{
		m -= 2*n;
		n += m / 4;
		cout << n << endl;
	}
	return 0;
}
