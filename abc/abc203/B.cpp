#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int ans;
	int f = k*(k+1)/2;
	int ff = 100*n*k*(n+1)/2;

	cout << f*n+ff << endl;
	return 0;
}
