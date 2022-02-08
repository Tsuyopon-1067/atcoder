#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long factorial(int n){
	long long res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
		res %= MOD;
	}
	return res;
}
int main() {
	int n, m;
	cin >> n >> m;

	if(n > m) swap(n, m);
	long long ans = (factorial(n) * factorial(m)) % MOD;
	if(m == n) ans = (ans*2) % MOD;
	else if(m - n != 1) ans = 0;
	cout << ans << endl;
	return 0;
}
