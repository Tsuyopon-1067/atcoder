#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;

	int mod[200] = {0};
	for(int ii = 0; ii < n; ii++) {
		int temp;
		cin >> temp;
		mod[temp%200]++;
	}

	long long ans = 0;
	rep(i, 200){
		long long t = mod[i];
		if(t > 1){
			ans += (t-1)*t/2;
		}
	}
	cout << ans << endl;
	return 0;
}
