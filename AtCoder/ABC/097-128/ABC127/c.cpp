#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int lmax = 1, rmin = n;
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        lmax = max(l, lmax);
        rmin = min(r, rmin);
    }
    cout << max(0, rmin - lmax + 1) << endl;
}