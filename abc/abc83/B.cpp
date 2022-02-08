#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int digitSum(int n){
	int res = 0;
	while(n > 0){
		res += n % 10;
		n /= 10;
	}
	return res;
}
int main() {
	int n, a, b;
	cin >> n >> a >> b;

	int ans = 0;
	rep(i, n){
		if(a <= digitSum(i+1) && digitSum(i+1) <= b) ans += i + 1;
	}
	cout << ans << endl;
	return 0;
}
