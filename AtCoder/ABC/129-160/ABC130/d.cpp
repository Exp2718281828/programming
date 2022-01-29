#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k;
    int a[100005];
    long long int s[100005] = {};
    long long int ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    s[0] = 0;
    for (int i = 0; i < n; i++) s[i + 1] = s[i] + a[i];
    for (int e = 1; e < n + 1; e++) {
        if (s[e] < k) continue;
        int ok = 0;
        int ng = e;
        while (ng - ok > 1) {
            int mid = (ok + ng) / 2;
            if (s[e] - s[mid] < k) {
                ng = mid;
            } else {
                ok = mid;
            }
        }
        ans += ok + 1;
    }
    cout << ans << endl;
}