#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    int p[200005];
    long long int t[200005] = {};
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> p[i];
    t[0] = 0;
    for (int i = 1; i <= n; i++) {
        t[i] = t[i - 1] + p[i - 1];
    }
    long long int maxs = 0;
    for (int i = 0; i <= n - k + 1; i++) {
        long long int s = t[i + k] - t[i];
        maxs = max(s, maxs);
    }
    double ans;
    ans = (maxs + k) / 2.0;
    printf("%.16f", ans);
    cout << endl;
}