#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, m, s = 0;
    cin >> n >> k >> m;
    for (int i = 0; i < n - 1; i++) {
        int a;
        cin >> a;
        s += a;
    }
    if (s + k < m * n)
        cout << -1 << endl;
    else
        cout << max(0, m * n - s) << endl;
}