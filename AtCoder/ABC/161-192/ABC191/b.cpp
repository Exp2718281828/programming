#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    bool space = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a != x) {
            if (space) cout << ' ';
            cout << a;
            space = true;
        }
    }
    cout << endl;
}