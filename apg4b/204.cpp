#include <bits/stdc++.h>
using namespace std;

int g(int &x){
	x = x*2;
	return x;
}
int main() {
	int a = 3;
	int b = g(a);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}
