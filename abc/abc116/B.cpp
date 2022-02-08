#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
	int s;
	cin >> s;

	vector<int> a(1, s);
	int m = -1;
	int n = 1;
	while(true){
		s = s % 2 == 0 ? s/2 : 3*s + 1;
		a.push_back(s);
		n++;
		rep(i, n-1){
			if(a[i] == s){
				 cout << n << endl;
				 goto label;
			}
		}
	}
label:
	return 0;
}
