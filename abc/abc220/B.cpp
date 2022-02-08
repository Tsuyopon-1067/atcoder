#include <bits/stdc++.h>
using namespace std;

int main() {
	long long k, a, b;
	cin >> k >> a >> b;

	int count = 0;
	long long aa = 0;
	while(a > 0){
		aa += (a % 10)*pow(k, count);
		a /= 10;
		count++;
	}
	long long bb = 0;
	count = 0;
	while(b > 0){
		bb += (b % 10)*pow(k, count);
		b /= 10;
		count++;
	}
	cout << aa*bb << endl;
	return 0;
}
