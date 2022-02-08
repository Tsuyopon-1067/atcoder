#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[10000];
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int ans = 0;
	rep(i, n){
		while(a[i] % 2 == 0){
			a[i] /= 2;
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
