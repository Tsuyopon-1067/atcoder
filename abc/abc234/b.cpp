#include <bits/stdc++.h>
using namespace std;

double d(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}
int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    double dd = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            dd = max(dd, d(x[i], y[i], x[j], y[j]));
        }
    }
    printf("%f\n", dd);

    return 0;
}
