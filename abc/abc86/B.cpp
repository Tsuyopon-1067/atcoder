#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int pp(int n){
	return n*n;
}
int main() {
	int a, b;
	cin >> a >> b;
	
	int c = b;
	if(b < 10) c += 10*a;
	else if(b < 100) c += 100*a;
	else c += 1000*a;

	bool ans = false;
	rep(i, 320){
		if(pp(i) == c) ans = true;
	}

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}
