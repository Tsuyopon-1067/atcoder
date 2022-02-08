#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int na = a.length();
	int nb = b.length();

	if(na > nb) printf("GREATER");
	else if(na < nb) printf("LESS");
	else if(a == b) printf("EQUAL");
	else{
		for(int i = 0; i < na; i++){
			if(a[i] > b[i]){
				printf("GREATER");
				break;
			}else if(a[i] < b[i]){
				printf("LESS");
				break;
			}
		}
	}
	
	return 0;
}
