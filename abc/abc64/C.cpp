#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int ii = 0; ii < n; ii++) cin >> a[ii];

	int flug[8] = {0};
	int k = 0;
	rep(i, n){
		if(a[i] >= 3200) k++;
		else flug[a[i]/400] = 1;
	}

	int ans = 0;
	rep(i, 8) ans += flug[i];

	if(ans == 0){
		ans = 1;
		k--;
	}

	printf("%d %d\n", ans, ans+k);
	return 0;
}
