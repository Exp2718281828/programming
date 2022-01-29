#include <bits/stdc++.h>
using namespace std;

const int INF = 100000000;

int main() {
    int n, m = INF, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (m > p) ans++;
        m = min(m, p);
    }
    cout << ans << endl;
}