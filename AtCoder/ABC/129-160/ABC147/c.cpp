#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[20];
    cin >> n;
    int ans = 0;
    pair<int, int> x[20][20];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < a[i]; j++) {
            cin >> x[i][j].first >> x[i][j].second;
        }
    }
    for (int bit = 0; bit < (1 << n); bit++) {
        int s = 0;
        for (int i = 0; i < n; i++) {
            if (!(bit & (1 << i))) continue;
            s++;
            for (int j = 0; j < a[i]; j++) {
                if (bit & (1 << x[i][j].first - 1)) {
                    if (x[i][j].second == 0) goto EXIT;
                } else {
                    if (x[i][j].second == 1) goto EXIT;
                }
            }
        }
        ans = max(ans, s);
    EXIT:
        s = 0;
    }
    cout << ans << endl;
}
