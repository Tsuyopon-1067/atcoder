#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int w;
	cin >> s;
	cin >> w;
	
	int i = 0;
	while(i < s.length()){
		cout << s[i];
		i += w;
	}
	cout << endl;
	return 0;
}
