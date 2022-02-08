#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<int> d(n);
	rep(i, n) cin >> d[i];
	sort(d.begin(), d.end());

	int ans = 0;
	rep(i, n){
		int temp = d[i];
		for(int j = i+1; j < n; j++){
			if(temp == d[j]) i++;
		}
		ans++;
	}
	cout << ans << endl;
	return 0;
}
