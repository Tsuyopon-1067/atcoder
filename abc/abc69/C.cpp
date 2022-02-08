#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int mlt2 = 0;
	int mlt4 = 0;
	rep(i, n){
		int temp;
		cin >> temp;
		if(temp % 4 == 0) mlt4++;
		else if(temp % 2 == 0) mlt2++;
	}
	int mlt1 = n - mlt4 - mlt2;
	if(mlt2 > 0) mlt1++;

	cout << (mlt4 + 1 >= mlt1 ? "Yes" : "No") << endl;

	return 0;
}
