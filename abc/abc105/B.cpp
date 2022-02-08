#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	bool ans = false;
	int nn = n;

	while(nn > 0){
		if(nn % 4 == 0){
			ans = true;
			break;
		}
		nn -= 7;
	}
	nn = n;
	while(nn > 0){
		if(nn % 7 == 0){
			ans = true;
			break;
		}
		nn -= 4;
	}

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}
