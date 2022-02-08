#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<char> s(n);
	rep(i, n) cin >> s[i];
	int ans = 0;
	for(int i = 1; i < n; i++){
		vector<char> x(i);
		vector<char> y(n-i);
		rep(j, i) x[j] = s[j];
		rep(j, n-i) y[j] = s[j + i];

		sort(x.begin(), x.end());
		sort(y.begin(), y.end());

		int tempi = 0;
		char temp = '0';
		rep(j, i){
			if(temp != x[j]){
				temp = x[j];
				rep(k, n-i){
					if(temp == y[k]){
						tempi++;
						break;
					}
				}
			}
		}
		ans = max(ans, tempi);
	}

	cout << ans << endl;
	return 0;
}
