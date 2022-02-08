#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for(int ii = 0; ii < n; ii++) cin >> a[ii];
	sort(a.begin(), a.end());

	int ans = 0;
	int temp = 0;
	rep(i, n){
		if(a[i] == temp){
			temp = 0;
			ans--;
		}else{
			temp = a[i];
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}
