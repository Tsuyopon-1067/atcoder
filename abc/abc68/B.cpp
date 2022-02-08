#include <bits/stdc++.h>
using namespace std;
int pow2(int n){
	int res = 1;
	while(n--) res *= 2;
	return res;
}
using namespace std;

int main() {
	int n;
	cin >> n;
	int k = 0;
	while(++k){
		if(n < pow2(k)) {
			printf("%d", pow2(--k));
			break;
		}
	}
	return 0;
}
