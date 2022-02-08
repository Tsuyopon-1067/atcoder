#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	a %= b;
	int k = 0;
	bool flug = false;
	while(true){
		if(k % b == c) {
			cout << "YES" << endl;
			break;
		}
		if(k == 0 && flug){
			cout << "NO" << endl;
			break;
		}
		flug = true;
		k+= a;
		if(k >= b) k %= b;
	}
	return 0;
}
