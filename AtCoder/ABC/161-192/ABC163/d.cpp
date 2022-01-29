#include <bits/stdc++.h>
using namespace std;
const long long int MOD = 1000000007;

long long int streaksum(long long int a, long long int b) {
    long long int ans;
    ans = b * (b + 1) / 2 - a * (a - 1) / 2;
    return ans;
}

int main() {
    int n, k;
    long long int ans = 0;
    cin >> n >> k;
    for (int i = k; i <= n + 1; i++) {
        ans += streaksum(n, n - i + 1) - streaksum(0, i - 1);
        ans %= MOD;
    }
    cout << (ans + 5 * MOD) % MOD << endl;
}