#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	string sn;
	cin >> sn;
	int l = sn.size();
	vector<char> n(l);
	rep(i, l) n[i] = sn[i];
	sort(n.begin(), n.end());

	int ans = 0;
	do{
		reps(1, i, l){
			int x = 0;
			int y = 0;
			if(n[i] == '0') break;
			rep(j, i){
				x *= 10;
				x += n[j] - '0';
				if(j == i) break;
			}
			reps(i, j, l){
				y *= 10;
				y += n[j] - '0';
			}
			ans = max(ans, x*y);
		}
	}while(next_permutation(n.begin(), n.end()));

	cout << ans << endl;

	return 0;
}
