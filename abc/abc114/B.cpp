#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int num(char a, char b, char c){
	int ai = a - '0';
	int bi = b - '0';
	int ci = c - '0';
	return ai * 100 + bi * 10 + ci;
}
int main() {
	string s;
	cin >> s;
	int n = s.length();
	int ans = 99999;
	rep(i, n-2){
		int temp = num(s[i], s[i+1], s[i+2]);
		temp = abs(753-temp);
		if(temp < ans) ans = temp;
	}
	cout << ans << endl;
	return 0;
}
