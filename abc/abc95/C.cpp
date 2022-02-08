#include <bits/stdc++.h>
using namespace std;
int min3(int a, int b, int c){
	a = a < b ? a : b;
	a = a < c ? a : c;
	return a;
}

int main() {
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;

	int nml = a*x + b*y;
	int ful = 2*c*max(x, y);
	int sem = 2*c*min(x, y) + abs(x-y)*(x>y ? a : b);

	cout << min3(nml, ful, sem) << endl;
	return 0;
}
