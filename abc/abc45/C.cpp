#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int pow2(int n){
	int res = 1;
	while(n--) res *= 2;
	return res;
}

int main() {
	string s;
	cin >> s;

	int n = s.length();
	int ans = 0;

	int sign[10] = {0};
	int ptn = pow2(n - 1);
	if(n == 1) ptn = 1;

	rep(i, ptn){
		int ii = i;
		int k = 0;
		while(ii > 0){
			sign[k] = ii % 2;
			ii /= 2;
			k++;
		}
		rep(k, n) cout << sign[k];
		cout << endl;
		rep(k, n){
			if(sign[k] == 1) {
				int temp = 0;
				while(sign[k] == 1){
					temp *= 10;
					temp += s[k] - '0';
					k++;
				}
				ans += temp;
				printf("temp = %d\n", temp);
			}
			else ans += s[k] - '0';
		}
	}

	cout << ans << endl;

	return 0;
}
