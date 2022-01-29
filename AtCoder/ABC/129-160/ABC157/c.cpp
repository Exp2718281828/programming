#include <bits/stdc++.h>
using namespace std;

int digitnum(long long int n, int d = 10) {
    assert(d > 1);
    int ans = 0;
    while (1) {
        n /= d;
        ans++;
        if (n == 0) return ans;
    }
}

int digitnthl(long long int x, int n, int d = 10) {
    assert(d > 1);
    assert(n > 0);
    int m = digitnum(x, d);
    if (m < n) return -1;
    for (int i = 0; i < m - n; i++) x /= d;
    return x % d;
}

int main() {
    int n, m;
    int ans = -1;
    pair<int, int> k[10];
    cin >> n >> m;
    for (int i = 0; i < m; i++) cin >> k[i].first >> k[i].second;
    sort(k, k + m);
    for (int i = 0; i < 1000; i++) {
        bool flag = true;
        if (digitnum(i) != n) continue;
        for (int j = 0; j < m; j++) {
            if (k[j].second != digitnthl(i, k[j].first)) flag = false;
        }
        if (flag) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}