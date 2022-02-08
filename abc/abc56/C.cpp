#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int x;
	cin >> x;
	int flug[10000] = {false};

	int t = 1;
	while(true){
		if(t*(t+1)/2 >= x) break;
		t++;
	}
	cout << t << endl;
	return 0;
}
