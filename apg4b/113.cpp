#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> vec = {1, 2, 4, 8, 16};
	for(int i = 0; i < 5; i++) cout << vec[i] << " ";
	cout << '\n' << endl;
	reverse(vec.begin(), vec.end());
	for(int i = 0; i < 5; i++) cout << vec[i] << " ";
	cout << '\n' << endl;
	reverse(vec.begin(), vec.end());

	cout << "sorting" << endl;

	sort(vec.begin(), vec.end());
	for(int i = 0; i < 5; i++) cout << vec[i] << " ";
	cout << '\n' << endl;
	reverse(vec.begin(), vec.end());

	return 0;
}
