#include <bits/stdc++.h>
using namespace std;

int pow2(int n){
	int res = 1;
	while(n--) res *= 2;
	return res;
}
int main() {
	int n, m;
	cin >> n >> m;

	cout << (1800*m+100*n)*pow2(m) << endl;
	return 0;
}
