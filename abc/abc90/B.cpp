#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool isRoop(int n){
	int nn = n;
	vector<int> s(5);
	vector<int> ss(5);
	rep(i, 5){
		s[i] = nn % 10;
		ss[i] = s[i];
		nn /= 10;
	}
	
	reverse(ss.begin(), ss.end());


	return s == ss;
}

int main() {
	int a, b;
	cin >> a >> b;

	int ans = 0;
	for(int i = a; i <= b; i++){
		if(isRoop(i)) ans++;
	}
	cout << ans << endl;
	return 0;
}
