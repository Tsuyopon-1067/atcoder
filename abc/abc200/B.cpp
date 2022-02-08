#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	long long n, k;
	cin >> n >> k;


	rep(i, k){
		if(n % 200 == 0) n /= 200;
		else{
			n *= 1000;
			n += 200;
		}
	}
	cout << n << endl;
	return 0;
}
