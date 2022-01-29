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
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (digitnum(i) % 2 == 1) ans++;
    cout << ans << endl;
}