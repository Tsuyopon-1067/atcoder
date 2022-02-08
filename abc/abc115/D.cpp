#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long b[50] = {0};
long long p[50] = {0};

void barg(int n){
	if(n == 0) p[n] = 1;
	else{
		barg(n-1);
		b[n] = 2*b[n-1] + 2;
		p[n] = 2*p[n-1] + 1;
	}
}
int main() {
	int n, x;
	cin >> n >> x;

	long long ans = 0;
	int k = 0;
	while(k < x){
		
	}
	cout << ans << endl;
	return 0;
}

//P
//B(P)P(P)B
//B(B(P)P(P)B)P(B(P)P(P)B)B
//B(B(B(P)P(P)B)P(B(P)P(P)B)B)P(B(B(P)P(P)B)P(B(P)P(P)B)B)B
//
//p[0]
//B[1]p[0]Pp[0]B[1]
//
