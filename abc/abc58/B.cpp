#include <bits/stdc++.h>
using namespace std;

int main() {
	string o = "", e = "";
	cin >> o;
	cin >> e;
	
	int on = o.length();
	int en = e.length();

	for(int i = 0; i < en; i++){
		putchar(o[i]);
		putchar(e[i]);
	}
	if(on - en > 0)putchar(o[on-1]);
	cout << endl;
	return 0;
}
