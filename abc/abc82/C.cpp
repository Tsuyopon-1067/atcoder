#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());

	int k;
	int count = 0;
	int ans = 0;
	int i = 0;
	while(i < n){
		k = a[i];
		while(i < n && a[i] == k){
			count++;
			i++;
		}
		int d = count - k;
		if(d < 0) d = k;
		ans += min(count, d);
		count = 0;
	}
	cout << ans << endl;
	return 0;
}
