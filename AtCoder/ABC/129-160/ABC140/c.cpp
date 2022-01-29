#include <bits/stdc++.h>
using namespace std;

const int INF = 100000000;

int main() {
    int n, b[105];
    cin >> n;
    b[0] = INF;
    for (int i = 0; i < n - 1; i++) cin >> b[i + 1];
    b[n] = INF;
    int ans = 0;
    for (int i = 0; i < n; i++) ans += min(b[i], b[i + 1]);
    cout << ans << endl;
}