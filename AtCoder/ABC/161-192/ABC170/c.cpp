#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, p[105];
    cin >> x >> n;
    for (int i = 0; i < n; i++) cin >> p[i];
    sort(p, p + n);
    for (int i = 0;; i++) {
        if (count(p, p + n, x - i) == 0) {
            cout << x - i << endl;
            break;
        }
        if (count(p, p + n, x + i) == 0) {
            cout << x + i << endl;
            break;
        }
    }
}