#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;
	if(90 <= x) cout << "expert" << endl;
	else if(70 <= x) cout << 90-x << endl;
	else if(40 <= x) cout << 70-x << endl;
	else cout << 40-x << endl;
	return 0;
}
