#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	if(n == 1){
		cout << 1 << endl;
		return 0;
	}

	long long l1 = 1, l2 = 2, ans;
	for(int i = 1; i < n; i++){
		ans = l1 + l2;
		l2 = l1;
		l1 = ans;
	}
	cout << ans << endl;
	return 0;
}
