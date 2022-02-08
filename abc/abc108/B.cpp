#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int d1 = x2-x1;
	int d2 = y2-y1;

	int x3 = x2 - d2;
	int x4 = x3 - d1;
	int y3 = y2 + d1;
	int y4 = y3 - d2;

	printf("%d %d %d %d\n", x3, y3, x4, y4);
	return 0;
}
