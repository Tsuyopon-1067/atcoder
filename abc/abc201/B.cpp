#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<string> s(n);
	vector<int> t(n);
	for(int ii = 0; ii < n; ii++) cin >> s[ii] >> t[ii];

	rep(i, n){
		int minIdx = i;
		for(int j = i; j < n; j++){
			if(t[minIdx] > t[j]) minIdx = j;
		}
		int temp = t[i];
		string temps = s[i];
		t[i] = t[minIdx];
		s[i] = s[minIdx];
		t[minIdx] = temp;
		s[minIdx] = temps;
	}
	
	cout << s[n-2] << endl;
	return 0;
}
