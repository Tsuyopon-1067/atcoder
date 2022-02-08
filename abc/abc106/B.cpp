#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

//3 5 7   = 105
//3 3 3 5 = 135
//3 5 11  = 165
//3 3 3 7 = 189
//3 5 13  = 195
int main() {
	int n;
	cin >> n;

	if(n < 105) cout << 0 << endl;
	else if(n < 135) cout << 1 << endl;
	else if(n < 165) cout << 2 << endl;
	else if(n < 189) cout << 3 << endl;
	else if(n < 195) cout << 4 << endl;
	else cout << 5 << endl;
	return 0;
}
