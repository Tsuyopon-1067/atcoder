#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, t, a;
	cin >> n;
	cin >> t >> a;
	vector<int> h(n);
	vector<double> tpr(n);
	int minIdx = 0;
	rep(i, n) {
		cin >> h[i];
		tpr[i] = t - h[i]*0.006;
		if(abs(a-tpr[i]) < abs(a-tpr[minIdx])) minIdx = i;
	}
	
	cout << minIdx + 1 << endl;

}
