#include <bits/stdc++.h>
using namespace std;

int max3(int a, int b, int c){
	a = (a > b ? a : b);
	return a > c ? a : c;
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 0;
	if(b%2 == c%2 && a%2 != b%2) swap(a, c);
	else if(c%2 == a%2 && b%2 != c%2) swap(b, c);

	if(a%2 == b%2 && c%2 != a%2){
		ans++;
		a++;
		b++;
	}

	int g = max3(a, b, c);
	ans += (3*g-a-b-c)/2;
	cout << ans << endl;
	return 0;
}


