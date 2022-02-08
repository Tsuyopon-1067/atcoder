#include <bits/stdc++.h>
using namespace std;

int show(int a, int b, int c, int d, char o1, char o2, char o3){
	printf("%d%c%d%c%d%c%d=7\n", a, o1, b, o2, c, o3, d);
	return 0;
}
int main() {
	string s;
	cin >> s;

	int a = s[0] - '0';
	int b = s[1] - '0';
	int c = s[2] - '0';
	int d = s[3] - '0';

	if(a + b + c + d == 7) show(a, b, c, d, '+', '+', '+');
	else if(a + b + c - d == 7) show(a, b, c, d, '+', '+', '-');
	else if(a + b - c + d == 7) show(a, b, c, d, '+', '-', '+');
	else if(a + b - c - d == 7) show(a, b, c, d, '+', '-', '-');
	else if(a - b + c + d == 7) show(a, b, c, d, '-', '+', '+');
	else if(a - b + c - d == 7) show(a, b, c, d, '-', '+', '-');
	else if(a - b - c + d == 7) show(a, b, c, d, '-', '-', '+');
	else if(a - b - c - d == 7) show(a, b, c, d, '-', '-', '-');
	return 0;
}
