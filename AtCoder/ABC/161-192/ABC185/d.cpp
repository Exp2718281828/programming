#include <bits/stdc++.h>
using namespace std;

const int INF = 2000000000;

int main() {
    int n, m, a[200005];
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    a[m] = n + 1;
    a[m + 1] = 0;
    sort(a, a + m + 2);
    int d[200005];
    for (int i = 0; i < m + 1; i++) {
        d[i] = a[i + 1] - a[i] - 1;
    }
    int c = INF;
    for (int i = 0; i < m + 1; i++) {
        if (d[i] != 0 && c > d[i]) c = d[i];
    }
    int ans = 0;
    for (int i = 0; i < m + 1; i++) {
        ans += (d[i] + c - 1) / c;
    }
    cout << ans << endl;
}