#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[200005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int m = 0;
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += max(m - a[i], 0);
        m = max(m, a[i]);
    }
    cout << ans << endl;
}