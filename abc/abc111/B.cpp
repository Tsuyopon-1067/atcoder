#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	while(n <= 999){
		if(n % 111 == 0) {
			cout << n << endl;
			return 0;
		}
		n++;
	}
	return 0;
}
