#include <bits/stdc++.h>
using namespace std;

int main() {
	int d, n;
	cin >> d >> n;

	if(n == 100) n++;
	switch (d) {
		case 0:
			cout << n << endl;
			break;
		case 1:
			cout << n*100 << endl;
			break;
		case 2:
			cout << n*10000 << endl;
			break;
	}
}
