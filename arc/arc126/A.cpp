#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	vector<vector<long long>> c(t, vector<long long>(3));
	rep(i, t)rep(j, 3) cin >> c[i][j];

	rep(i, t){
		long long n2 = c[i][0];
		long long n3 = c[i][1];
		long long n4 = c[i][2];
		long long ans = 0;

		if(n3 >= n4 * 2 && n3 >= 2){//334
			ans += n4;
			n3 -= n4*2;
			n4 = 0;
		}else if(n3 < n4 && n3 >= 2){
			ans += n3/2;
			n4 -= n3/2;
			n3 = n3/2;
		}

		if(n3 >= n2 && n2 >= 2){//2233
			ans += n2/2;
			n3 -= n2/2*2;
			n2 -= n2/2*2;
		}else if(n3 <= n2 && n3 >= 2){
			ans += n3/2;
			n3 -= n3/2*2;
			n2 -= n3/2*2;
		}

		if(n4 >= n2*2 && n2 >=1){//442
			ans += n2;
			n4 -= n2*2;
			n2 = 0;
		}else if( n4 < n2*2 && n4 >= 2){
			ans += n4;
			n4 = 0;
			n2 -= n4*2;
		}
		
		if(n4*3 >= n2 && n2 >=3){//4222
			ans += n2/3;
			n4 -= n2/3;
			n2 -= n2/3;
		}else if( n4*3 < n2 && n4 >= 1){
			ans += n4;
			n4 = 0;
			n2 -= n4*3;
		}

		if(n2 >= 5){
			ans += n2/5;
		}
		cout << ans << endl;
	}
	return 0;
}
