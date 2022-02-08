#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
	int n;
	cin >> n;
	int max = 0;
	int min = 1000;
	int temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(max < temp) max = temp;
		if(min > temp) min = temp;
	}
	printf("%d\n", max - min);

	return 0;
}
