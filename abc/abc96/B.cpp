#include <bits/stdc++.h>
using namespace std;

int pow2(int n){
	int res = 1;
	while(n--) res *= 2;
	return res;
}
int main() {
	int a, b, c, k;
	cin >> a >> b >> c;
	cin >> k;
	if(a < b) swap(a, b);
	if(a < c) swap(a, c);
	a *= pow2(k);
	cout << a + b + c << endl;
	return 0;
}
