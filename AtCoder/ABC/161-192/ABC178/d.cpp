#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
int ans[2005];

int dp(int n) {
    int k;
    if (ans[n] >= 0) return ans[n];
    if (n == 0) {
        k = 1;
    } else if (n <= 2) {
        k = 0;
    } else {
        k = (dp(n - 1) + dp(n - 3)) % MOD;
    }
    ans[n] = k;
    return k;
}

int main() {
    int s;
    cin >> s;
    memset(ans, -1, sizeof(ans));
    cout << dp(s) % MOD << endl;
}