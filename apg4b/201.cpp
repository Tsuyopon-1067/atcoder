#include <bits/stdc++.h>

using namespace std;

int main(){
	int a;
	vector<int> vec;
	a = 3;
	vec = {1, 3, 2, 5, 3};

	int k = 0;
	for(int x: vec){
		if(x == a) k++;
	}

	cout << k << endl;
	return 0;
}
