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

int main() {
    long long int n;
    cin >> n;
    long long int ans = 0;
    int m = digitnum(n);
    for (int i = 2; i <= 12; i += 2) {
        if (i < m) ans += 9 * pow(10, i / 2 - 1);
    }
    long long int a, b;
    if (m % 2 == 0) {
        a = n / pow(10, m / 2);
        b = n - a * pow(10, m / 2);
        if (a > b) {
            ans += a - 1;
        } else {
            ans += a;
        }
        ans -= pow(10, m / 2 - 1) - 1;
    }
    cout << ans << endl;
}