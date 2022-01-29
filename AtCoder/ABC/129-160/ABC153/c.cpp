#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, h[200005];
    long long int ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> h[i];
    sort(h, h + n);
    for (int i = 0; i < n - k; i++) ans += h[i];
    cout << ans << endl;
}