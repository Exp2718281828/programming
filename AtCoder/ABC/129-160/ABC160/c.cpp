#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n;
    int a[200005];
    cin >> k >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int d[200005];
    for (int i = 1; i < n; i++) {
        d[i] = a[i] - a[i - 1];
    }
    d[0] = a[0] + k - a[n - 1];
    int ans;
    ans = k - *max_element(d, d + n);
    cout << ans << endl;
}