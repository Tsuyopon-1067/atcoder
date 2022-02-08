#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	//cin >> a >> b;
	a = 22;
	b = 93;
	cout << min(a, b) << max(a, b) << endl;
	cout << "a = " << a << endl;
	swap(a, b);
	cout << "a = " << a << endl;

	int ary[5];
	for (int i = 0; i < 5; i++) ary[i] = i*i;
	for (int i = 0; i < 5; i++) cout << ary[i] << endl;;
	reverse(ary.begin(), begin.end());
	for (int i = 0; i < 5; i++) cout << ary[i] << endl;;

	return 0;
}
