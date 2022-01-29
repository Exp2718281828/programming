#include <bits/stdc++.h>
using namespace std;

const long long int MOD = 1000000007;

int main() {
    long long int n, a[200005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    s %= MOD;
    s = s * s % MOD;
    for (int i = 0; i < n; i++) {
        s -= a[i] * a[i] % MOD;
        if (s < 0) s += MOD;
    }
    s *= (MOD + 1) / 2;
    s %= MOD;
    cout << s << endl;
}