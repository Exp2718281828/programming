#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    int l[105];
    cin >> n >> x;
    int ans = 1;
    for (int i = 0; i < n; i++) cin >> l[i];
    int d = 0;
    for (int i = 0; i < n; i++) {
        d = d + l[i];
        if (d <= x) ans++;
    }
    cout << ans << endl;
}