#include <bits/stdc++.h>
using namespace std;

bool isNum(char s){
	return !(s < '0' || '9'< s);
}
int main() {
	int a, b;
	string s;
	cin >> a >> b;
	cin >> s;
	bool ans = true;
	for(int i = 0; i < a; i++){
		if(!isNum(s[i])){
			ans = false;
			break;
		}
	}
	if(s[a] != '-') ans = false;
	if(ans){
		for(int i = a+1; i < a + b + 1; i++){
			if(!isNum(s[i])){
				ans = false;
				break;
			}
		}
	}

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}
