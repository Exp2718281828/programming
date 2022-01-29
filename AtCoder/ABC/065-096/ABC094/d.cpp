#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100005];
    cin >> n;
    int ans;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int m = a[n - 1];
    ans = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < m && abs(ans - (m + 1) / 2) > abs(a[i] - (m + 1) / 2)) ans = a[i];
    }
    cout << m << ' ' << ans << endl;
}