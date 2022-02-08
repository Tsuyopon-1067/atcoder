#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	string s;
	cin >> s;
	rep(i, 8) s[i] -= '0';
	int y = 1000*s[0]+100*s[1]+10*s[2]+s[3];
	if(y < 2019) cout << "Heisei" << endl;
	else{
		int m = 10*s[5]+s[6];
		if(m < 5) cout << "Heisei" << endl;
		else cout << "TBD" << endl;
	}

	return 0;
}
