#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, x;
    cin >> n >> x;
    x *= 100;
    for (int i = 0; i < n; i++) {
        double v, p;
        cin >> v >> p;
        x -= v * p;
        if (x < 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}