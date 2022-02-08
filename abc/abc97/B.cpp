#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;

	int ans = 0;
	for(int i = 1; i <= x; i++){
		for(int j = 2; j < 10; j++){
			int temp = pow(i, j);
			if(temp <= x && ans < temp) ans = temp;
		}
	}
	cout << ans << endl;
	return 0;
}
