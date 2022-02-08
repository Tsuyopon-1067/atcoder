#include <bits/stdc++.h>
using namespace std;

int p(int n){
	return n*n;
}
int main() {
	int n;
	cin >> n;
	int ans = 0;
	while(p(++ans) <= n);
	printf("%d\n", p(--ans));
	return 0;
}
