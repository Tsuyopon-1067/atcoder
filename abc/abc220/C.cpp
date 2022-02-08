#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100000];
	long long sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	long long x;
	cin >> x;

	int ans = (x / sum)*n;
	long long tsum = sum*(ans/n);
	int i = 0;

	if(x%sum==0){
		cout << n*(x/sum)+1 << endl;
		return 0;
	}
	while(tsum <= x){
		tsum += a[i];
		ans++;
		i++;
	}
	cout << ans << endl;
	return 0;
}
