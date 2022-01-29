#include <bits/stdc++.h>
using namespace std;

const long long int MOD = 1000000007;

int main() {
    long long int n, a[100005];
    long long int ans = 1;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    a[n] = 0;
    sort(a, a + n + 1);
    for (int i = 0; i < n; i++) {
        ans *= a[i + 1] - a[i] + 1;
        ans %= MOD;
    }
    cout << (ans + 100000 * MOD) % MOD << endl;
}