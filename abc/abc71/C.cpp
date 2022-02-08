#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());

	long long x = 0;
	long long y = 0;
	int xtemp = 0;
	int ytemp = 0;
	int xIdx = 0;

	for(int i = n-1; 0 <= i; i--){
		if(xtemp == a[i]){
			x = xtemp;
			xIdx = i;
			break;
		}
		xtemp = a[i];
	}
	for(int i = xIdx - 1; 0 <= i; i--){
		if(ytemp == a[i]){
			y = ytemp;
			break;
		}
		ytemp = a[i];
	}
	long long ans = x * y;
	cout << ans << endl;
	return 0;
}
