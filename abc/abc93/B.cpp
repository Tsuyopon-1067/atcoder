#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int a, b, k;
	cin >> a >> b >> k;

	if(b - a >= k *2){
		rep(i, k) cout << i + a << endl;
		rep(i, k) cout << i + b - k + 1 << endl;
	}else{
		for(int i = a; i <= b; i++) cout << i << endl;
	}
	return 0;
}
