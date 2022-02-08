#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void rotate(char s[], int n){
	char temp[n];
	rep(i, n) temp[i] = s[i];
	rep(i, n-1) s[i] = temp[i+1];
	s[n-1] = temp[0];
}
bool equal(char s[], char t[], int n){
	bool res = true;
	rep(i, n){
		if(s[i] != t[i]) res = false;
	}
	return res;
}
int main() {
	char s[100];
	char t[100];
	cin >> s;
	cin >> t;
	
	int n = strlen(s);
	bool ans = false;
	rep(i, n){
		if(equal(s, t, n)){
			ans = true;
			break;
		}
		rotate(t, n);
	}
	
	cout << (ans ? "Yes" : "No") << endl;

	return 0;
}
