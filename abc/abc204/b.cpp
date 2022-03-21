#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());

	int ans = 0;
	int i = 0;
	while(a[i] <= 10) i++;
	while(i < n){
		ans += a[i]-10;
		i++;
	}
	cout << ans << endl;
	return 0;
}
