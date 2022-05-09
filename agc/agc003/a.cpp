#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int>mp;
    for (auto x : s) ++mp[x];

    int dn = mp['N'];
    int dw = mp['W'];
    int ds = mp['S'];
    int de = mp['E'];

    string ans = "Yes"; 
    if (dn * ds == 0 && dn + ds > 0) ans = "No"; 
    if (dw * de == 0 && dw + de > 0) ans = "No"; 
    cout << ans << endl;
    return 0;
}
