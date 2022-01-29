#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, a[105], b[105], c[20], d[20];
    int ans = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++) cin >> a[i] >> b[i];
    cin >> k;
    for (int i = 0; i < k; i++) cin >> c[i] >> d[i];
    for (int bit = 0; bit < (1 << k); bit++) {
        bool x[105] = {false};
        for (int j = 0; j < k; j++) {
            if (bit & (1 << j)) {
                x[c[j]] = true;
            } else {
                x[d[j]] = true;
            }
        }
        int s = 0;
        for (int j = 0; j < m; j++) {
            if (x[a[j]] == true && x[b[j]] == true) s++;
        }
        ans = max(ans, s);
    }
    cout << ans << endl;
}