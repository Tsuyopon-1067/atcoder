#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	char s[52][52] = {'.'};
	for(int i = 1; i <= h; i++)for(int j = 1; j <= w; j++) cin >> s[i][j];

	bool ans = true;
	for(int i = 1; i <= h; i++)for(int j = 1; j <= w; j++){
		if(s[i][j] == '#'){
			if(s[i-1][j] == '.' && s[i+1][j] == '.' && s[i][j-1] == '.' && s[i][j+1] == '.') ans = false;
		}
	}
	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}
