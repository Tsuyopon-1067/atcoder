#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
	int n, m, x;
	cin >> n >> m >> x;
	vector<int > a(m);
	for(int ii = 0; ii < m; ii++) cin >> a[ii];

	int l = 0;
	int i = 0;
	while(a[i] < x){
		i++;
		l++;
	}
	int r = 0;
	while(i < m){
		i++;
		r++;
	}
	cout << min(l, r) << endl;
}
