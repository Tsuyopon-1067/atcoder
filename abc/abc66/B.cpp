#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

bool isOdd(string s){
	int len = s.length();
	string half = s;
	half.erase(len/2);
	half = half + half;
	return half == s;
}

int main() {
	string s;
	cin >> s;
	bool flug = false;
	if(s.length() % 2 == 1) {
		s.erase(s.length() - 1);
		flug = true;
	}
	int len = s.length() / 2;
	int i;
	for(i = 0; i < len; i++){
		if(flug && isOdd(s)){
			printf("%d", s.length());
			break;
		}
		s.erase(s.length()-2);
		flug = true;
	}
	return 0;

}
