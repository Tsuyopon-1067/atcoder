#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;

	int p[25] = 	{2, 3, 5, 7, 11, 13, 17, 19,
				23, 29, 31, 37,
				41, 43, 47, 53, 59,
				61, 67, 71, 73, 79,
				83, 89, 97};
	int pk[25] = {0};
	for(int i = 2; i <= n; i++){
		int temp = i;
		while(temp > 1){
			rep(j, 25){
				if(temp % p[j] == 0){
					pk[j]++;
					temp /= p[j];
				}
			}
		}
	}

	int ans = 0;
	rep(i, 25){
		if(pk[i] >= 2){
			int yaku4 = 0;
			rep(j, 25){
				if(j == i) continue;
				if(pk[j] >= 4) yaku4++;
			}
			if(yaku4 >= 2) ans += yaku4*(yaku4-1)/2;

			rep(j, 25){
				if(j == i) continue;
				if(pk[j] >= 24) ans++;
			}
		}
		if(pk[i] >= 4){
			rep(j, 25){
				if(j == i) continue;
				if(pk[j] >= 14) ans++;
			}
		}

	}

	rep(i, 25){
		if(pk[i] >= 74) ans++;
	}
	cout << ans << endl;
	return 0;
}

//75 = 3 5 5
//   = 5 15
//   = 3 25
