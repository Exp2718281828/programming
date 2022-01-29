#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a[105];
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    int s = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) s += a[i];
    for (int i = 0; i < n; i++) {
        if (4 * m * a[i] >= s) ans++;
    }
    if (ans >= m)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}