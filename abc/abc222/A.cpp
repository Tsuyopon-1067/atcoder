#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	string n;
	cin >> n;
	rep(i, 4-n.size()) cout << '0';
	cout << n << endl;
	return 0;
}
