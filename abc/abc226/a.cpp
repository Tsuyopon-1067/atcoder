#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    cin >> x;
    long n = 10*x;
    if(n%10 < 5) cout << n/10 << endl;
    else cout << (n+10)/10 << endl;
    return 0;
}
