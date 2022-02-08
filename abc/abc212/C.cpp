#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int i = 0;
	int j = 0;
	int ans = abs(a[0] - b[0]);
	rep(i, n){
		do{
			ans = min(ans, abs(a[i]-b[j]));
			printf("a = %d, b = %d\n", a[i], b[j]);
			j++;
			if(j == m){
				i = n;
				break;
			}
		}while(ans >= abs(a[i]-b[j]));
		do{
			ans = min(ans, abs(a[i]-b[j]));
			printf("a = %d, b = %d\n", a[i], b[j]);
			i++;
			if(i == n){
				break;
			}
		}while(ans >= abs(a[i]-b[j]));
	}
	cout << ans << endl;
	return 0;
}
