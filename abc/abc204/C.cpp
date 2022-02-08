#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	pair<int, int> x[2000];
	set<pair<int, int>> st; 
	for(int i = 0; i < m; i++) cin >> x[i].first >> x[i].second;

	rep(i, n){
		int j = 0;
		int g = x[i].second;
		while(x[j].second != x[i].first){
			pair<int, int> temp(x[i].first, x[j].second);
			st.insert(temp);
			if(++j == n) break;
		}
	}
	cout << st.size()+n << endl;
	return 0;
}
