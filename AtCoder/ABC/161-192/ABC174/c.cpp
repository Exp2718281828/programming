#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int x, long long int y) {
    if (x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}

int main() {
    int k, ans;
    cin >> k;
    int a = 7;
    if (gcd(k, 10) != 1)
        ans = -1;
    else {
        for (int i = 1;; i++) {
            if (a % k == 0) {
                ans = i;
                break;
            }
            a = 10 * a + 7;
            a %= k;
            assert(i >= 0);
        }
    }
    cout << ans << endl;
}