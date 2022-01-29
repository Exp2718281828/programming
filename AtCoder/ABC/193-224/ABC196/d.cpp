#include <bits/stdc++.h>
using namespace std;

int h, w, a, b, n;

int dp(int c[20][20], int l) {
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (c[i][j] == 0) {
                int d[20][20];
                for (int k = 0; k < h; k++) {
                    for (int m = 0; m < w; m++) {
                        d[k][m] = c[k][m];
                    }
                }
                if (i != h - 1 && c[i + 1][j] == 0) {
                    d[i][j] = 1;
                    d[i + 1][j] = 1;
                    if (l == 2)
                        ans++;
                    else
                        ans += dp(d, l - 2);
                }
                for (int k = 0; k < h; k++) {
                    for (int m = 0; m < w; m++) {
                        d[k][m] = c[k][m];
                    }
                }
                if (j != w - 1 && c[i][j + 1] == 0) {
                    d[i][j] = 1;
                    d[i][j + 1] = 1;
                    if (l == 2)
                        ans++;
                    else
                        ans += dp(d, l - 2);
                }
                goto EXIT;
            }
        }
    }
    if (l == 0) ans = 1;
EXIT:
    return ans;
}

int main() {
    cin >> h >> w >> a >> b;
    n = h * w;
    int ans = 0;
    for (int bit = 0; bit < (1 << n); bit++) {
        if (__builtin_popcount(bit) != b) continue;
        int e[20][20] = {};
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) e[i / w][i % w] = 1;
        }
        ans += dp(e, n - b);
    }
    cout << ans << endl;
}