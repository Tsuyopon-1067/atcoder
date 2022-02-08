#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	bool exist = false;
	for(char i = 'a'; i <= 'z'; i++){
		for(int j = 0; j < s.length(); j++){
			if(j == s.length()-1 && s[j] != i) {
				cout << i << endl;
				exist = true;
				i = 'z'+1;
				break;
			}
			if(s[j] == i) break;
		}
	}
	if(exist == false) cout << "None" << endl;
	return 0;
}
