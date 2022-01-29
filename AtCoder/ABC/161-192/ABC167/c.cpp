#include <bits/stdc++.h>
using namespace std;

const int INF = 100000000;

int main() {
    int n, m, x, c[15], a[15][15];
    cin >> n >> m >> x;
    int ans = INF;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < m; j++) cin >> a[i][j];
    }
    for (int bit = 0; bit < (1 << n); bit++) {
        int b[15] = {};
        int s = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                s += c[i];
                for (int j = 0; j < m; j++) b[j] += a[i][j];
            }
        }
        if (*min_element(b, b + m) >= x) {
            ans = min(ans, s);
        }
    }
    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
}