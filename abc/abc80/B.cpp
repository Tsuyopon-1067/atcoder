#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, nn;
	cin >> n;
	nn = n;
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}

	if(nn % sum == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
