#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[25], b[25], c[25];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n - 1; i++) cin >> c[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += b[a[i] - 1];
        if (i > 0 && a[i] - a[i - 1] == 1) ans += c[a[i - 1] - 1];
    }
    cout << ans << endl;
}