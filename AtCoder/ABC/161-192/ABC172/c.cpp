#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    int ans = 0;
    long long int a[200005], b[200005];
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    long long int as[200005] = {}, bs[200005] = {};
    for (int i = 0; i < n; i++) as[i + 1] = as[i] + a[i];
    for (int i = 0; i < m; i++) bs[i + 1] = bs[i] + b[i];
    for (int i = 0; i < n + 1; i++) {
        if (as[i] > k) break;
        auto itrx = upper_bound(bs, bs + m + 1, k - as[i]);
        itrx--;
        int x = distance(&bs[0], itrx);
        ans = max(ans, x + i);
    }
    cout << ans << endl;
}