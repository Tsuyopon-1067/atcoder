#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int a, b, k;
	cin >> a >> b >> k;

	rep(i, k){
		if(i % 2 == 0){
			if(a % 2 == 1) a--;
			a /= 2;
			b += a;
		}else{
			if(b % 2 == 1) b--;
			b /= 2;
			a += b;
		}
	}
	
	printf("%d %d", a, b);
	return 0;
}
