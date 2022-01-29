#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int w, h, x, y;
    cin >> w >> h >> x >> y;
    double ans = w * h / 2.0;
    printf("%.16f ", ans);
    if (2 * x == w && 2 * y == h)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}