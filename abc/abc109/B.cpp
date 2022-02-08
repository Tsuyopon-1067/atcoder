#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<string> w(n);
	rep(i, n) cin >> w[i];

	bool ans = true;
	rep(i, n-1){
		if(w[i][w[i].length()-1] != w[i+1][0]) ans = false;
	}

	sort(w.begin(), w.end());
	string temp = "";
	rep(i, n){
		if(temp == w[i]){
			ans = false;
			break;
		}else temp = w[i];
	}

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}
