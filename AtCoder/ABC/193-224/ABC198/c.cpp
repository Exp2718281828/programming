#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int r, x, y;
    cin >> r >> x >> y;
    long long int d = x * x + y * y;
    if (r * r > d) {
        cout << 2 << endl;
        return 0;
    }
    for (long long int i = 0;; i++) {
        if (i * i * r * r >= d) {
            cout << i << endl;
            return 0;
        }
    }
}