#define _GLIBCXX_DEBUG
#define rep(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		ans += temp-1;
	}
	
	cout << ans << endl;
	return 0;
}
