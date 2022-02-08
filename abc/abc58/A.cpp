#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if(b - a == c - b) printf("YES\n");
	else printf("NO\n");
	return 0;
}
