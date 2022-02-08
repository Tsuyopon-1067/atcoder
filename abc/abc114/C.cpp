#include <bits/stdc++.h>
using namespace std;

bool is753(int n){
	bool b3 = false;
	bool b5 = false;
	bool b7 = false;
	while(n > 0){
		int t = n % 10;
		if(t == 3) b3 = true;
		if(t == 5) b5 = true;
		if(t == 7) b7 = true;
		if(t != 3 && t != 5 && t != 7) return false;
		n /= 10;
	}
	return b3 && b5 && b7;
}

int main() {
	int n;
	cin >> n;

	int ans = 0;
	for(int i = 357; i <= n; i++){
		if(is753(i)) ans++;
		if(i == 777777777) break;
		else if(i == 577777777) i = 733333333;
		else if(i == 377777777) i = 533333333;
		else if(i == 77777777) i = 333333333;
	}
	cout << ans << endl;
	return 0;
}
