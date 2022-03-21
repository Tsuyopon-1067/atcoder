#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int p[26];
	for(int ii = 0; ii < 26; ii++) cin >> p[ii];
	rep(i, 26) p[i] = p[i] - 1 + 'a';

	for(int ii = 0; ii < 26; ii++) printf("%c", p[ii]);
	return 0;
}
