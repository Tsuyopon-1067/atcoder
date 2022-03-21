#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	char x[26];
	cin >> x;
	int n;
	cin >> n;
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	char dic[256];
	rep(i, 26) dic[x[i]] = i+1;

	long long snum[50000] = {0};
	rep(i, n){
		rep(j, 10){
			snum[i] *= 27;
			if(j < s[i].size()) snum[i] += dic[s[i][j]];
		}
	}

	rep(i, n){
		int idx = i;
		for(int j = i+1; j < n; j++){
			if(snum[idx] > snum[j]) idx = j;
		}
		long long temp = snum[i];
		snum[i] = snum[idx];
		snum[idx] = temp;
		string temps = s[i];
		s[i] = s[idx];
		s[idx] = temps;
	}

	rep(i, n) cout << s[i] << endl;

	return 0;
}
