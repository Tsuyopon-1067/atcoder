#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int k;
	cin >> k;

	int i = 0;
	while(s[i] == '1') i++;
	if(k < i+1){
		cout << 1 << endl;
		return 0;
	}
	if(i == s.size()) i--;
	cout << s[i] << endl;
	return 0;
}
