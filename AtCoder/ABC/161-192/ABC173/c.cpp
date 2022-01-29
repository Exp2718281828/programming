#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, k;
    char c[7][7];
    int ans = 0;
    cin >> h >> w >> k;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) cin >> c[i][j];
    for (int i = 0; i < (1 << h); i++) {
        for (int j = 0; j < (1 << w); j++) {
            int s = 0;
            for (int l = 0; l < h; l++) {
                for (int m = 0; m < w; m++) {
                    if (c[l][m] == '#' && (i & (1 << l)) && (j & (1 << m))) s++;
                }
            }
            if (s == k) ans++;
        }
    }
    cout << ans << endl;
}
