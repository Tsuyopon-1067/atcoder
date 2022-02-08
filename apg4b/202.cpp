#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<vector<int>> data = {
		{7, 4, 0, 8},
		{2, 0, 3, 5},
		{6, 1, 7, 0},
		};
	int k = 0;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			if(data.at(i).at(j) == 0) k++;
		}
	}
	cout << "k = " << k << endl;

	int n = 5;
	vector<int> vec(5);
	for(int i = 0; i < 5; i++) cout << vec.at(i);

	vector<vector<int>>niji(5, vector<int>(5, 0));
	int l = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			niji[i][j] = l;
			l++;
		}
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cout << niji[i][j] << endl;
		}
	}
	return 0;
}
