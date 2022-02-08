#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct pref{
	int n = 0;
	int p = 0;
	int y = 0;
	int num = 0;
};

int main() {
	int n, m;
	cin >> n >> m;
	vector<struct pref> p(m);
	rep(i, m){
		cin >> p[i].p >> p[i].y;
		p[i].n = i;
	}

	rep(i, m){
		int minIdx = i;
		for(int j = i + 1; j < m; j++){
			if(p[minIdx].y > p[j].y) minIdx = j;
		}
		swap(p[i], p[minIdx]);
	}

	vector<int> count(n, 0);
	rep(i, m){
		count[p[i].p -1]++;
		p[i].num = count[p[i].p -1];
	}
	
	rep(i, m){
		int minIdx = i;
		for(int j = i + 1; j < m; j++){
			if(p[minIdx].n > p[j].n) minIdx = j;
		}
		swap(p[i], p[minIdx]);
	}
	
	rep(i, m) printf("%06d%06d\n", p[i].p, p[i].num);

	return 0;
}
