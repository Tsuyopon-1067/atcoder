#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<char> s(n);
	rep(i, n) cin >> s[i];
	sort(s.begin(), s.end());

	int k = 0;
	char temp = '0';
	rep(i, n){
		if(temp != s[i]){
			k++;
			temp = s[i];
		}
	}

	cout << (k == 3 ? "Three" : "Four") << endl;
	return 0;
}
