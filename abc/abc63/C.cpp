#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<int> s(n);
	int ans = 0;
	for(int ii = 0; ii < n; ii++){
		cin >> s[ii];
		ans += s[ii];
	}
	int m = ans % 10;

	if(m != 0) cout << ans << endl;
	else{
		sort(s.begin(), s.end());
		for(int idx = 0; idx < n; idx++){
			if(s[idx] % 10 != 0){
				ans -= s[idx];
				break;
			}
			if(idx == n-1) ans = 0;
		}
		cout << ans << endl;
	}
}
