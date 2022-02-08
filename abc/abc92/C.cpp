#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100002];
	a[0] = 0;
	for(int i = 1; i <= n; i++) cin >> a[i];
	a[n+1] = 0;

	long long sum = 0;
	for(int i = 0; i <= n; i++) sum += abs(a[i+1]-a[i]);
	for(int i = 1; i <= n; i++){
		cout << sum + abs(a[i+1]-a[i-1])-abs(a[i+1]-a[i])-abs(a[i]-a[i-1]) << endl;
	}

	return 0;
}
