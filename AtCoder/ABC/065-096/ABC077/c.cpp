#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100005], b[100005], c[100005];
    long long int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    sort(a, a + n);
    sort(b, b + n);
    sort(c, c + n);
    int d[100005] = {};
    for (int i = 0; i < n; i++) d[i] = lower_bound(a, a + n, b[i]) - a;
    long long int ds[100005] = {};
    for (int i = 0; i < n; i++) ds[i + 1] = ds[i] + d[i];
    for (int i = 0; i < n; i++) {
        int x = lower_bound(b, b + n, c[i]) - b;
        ans += ds[x];
    }
    cout << ans << endl;
}