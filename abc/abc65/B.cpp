#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	bool flug = false;
	int temp = 0;
	int i = 0;
	for(i = 0; i < n; i++){
		temp = a[temp] - 1;
		if(temp == 1){
			flug = true;
			break;
		}
	}
	if(flug) printf("%d", i + 1);
	else printf("-1");
	return 0;
}
