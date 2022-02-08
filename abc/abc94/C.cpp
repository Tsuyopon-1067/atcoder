#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<int> x(n);
	for(int ii = 0; ii < n; ii++) cin >> x[ii];
	vector<int> xx(n);
	rep(i, n) xx[i] = x[i];
	sort(xx.begin(), xx.end());

	double m = (xx[n/2-1] + xx[n/2])/2;
	int mIdx;
	rep(i, n){
		mIdx = n/2;
		if(m < x[i]) mIdx--;  
		cout << xx[mIdx] << endl;
	}
	return 0;
}
