#include <bits/stdc++.h>
using namespace std;

int step(int n){
	if(n == 1) return 1;
	else return(n + step(n-1));
}
int main() {
	int a, b;
	cin >> a >> b;
	for(int i = 2; i <= 999; i++){
		if(step(i) - step(i-1) == b - a){
			cout << step(i-1) - a << endl;
			break;
		}
	}
	return 0;
}
