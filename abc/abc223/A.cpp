#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x == 0){
        cout << "No" << endl;
        return 0;
    }
    cout << (x % 100 == 0 ? "Yes" : "No") << endl;
    return 0;
}
