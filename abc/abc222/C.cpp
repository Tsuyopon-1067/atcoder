#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(2*n, vector<int>(m));
	vector<vector<int>> k(2*n, vector<int>(4, 0));//[n][4]win d loose N

	rep(i, 2*n){
		k[i][3] = i;
		rep(j, m){
			char temp;
			cin >> temp;
			if(temp == 'G') a[i][j] = 0;
			else if(temp == 'C') a[i][j] = 1;
			else if(temp == 'P') a[i][j] = 2;
		}
	}

	rep(i, m){
		rep(j, 2*n){
			int maxIdx = j;
			reps(j, l, 2*n){
				if(k[maxIdx][0] < k[l][0]) maxIdx = l;
				//if(k[maxIdx][0] == k[l][0] && k[maxIdx][2] > k[l][2]) maxIdx = l;
				if(k[maxIdx][0] == k[l][0] && k[maxIdx][3] > k[l][3]) maxIdx = l;
			}
			rep(l, 4) swap(k[maxIdx][l], k[j][l]);
		}



		rep(j, 2*n){
			int n1 = k[j][3];
			int n2 = k[j+1][3];
			int te1 = a[n1][i];
			int te2 = a[n2][i];
			k[j][(4+te1-te2)%3]++;
			k[j+1][(4+te2-te1)%3]++;
			j++;
		}

	}
		rep(j, 2*n){
			int maxIdx = j;
			reps(j, l, 2*n){
				if(k[maxIdx][0] < k[l][0]) maxIdx = l;
				if(k[maxIdx][0] == k[l][0] && k[maxIdx][3] > k[l][3]) maxIdx = l;
			}
			rep(l, 4) swap(k[maxIdx][l], k[j][l]);
		}


	rep(i, 2*n){
		cout << k[i][3]+1 << endl;//番号がiなら出す
	}

	return 0;
}
