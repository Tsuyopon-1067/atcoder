#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	
	bool flug = true;
	int ans = 0;
	while(flug){
		rep(i, n){
			if(a[i] % 2 == 0) a[i] /= 2;
			else{
				flug = false;
				cout << ans << endl;
				break;
			}
		}
		ans++;
	}
	return 0;
}
