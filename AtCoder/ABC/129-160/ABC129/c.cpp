#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
int fib[100005];

int returnfib(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (fib[n] >= 0) return fib[n];
    int ans = returnfib(n - 1) + returnfib(n - 2);
    ans %= MOD;
    fib[n] = ans;
    return ans;
}

void makefib() {
    for (int i = 1; i <= 100002; i++) fib[i] = returnfib(i);
}

int main() {
    memset(fib, -1, sizeof(fib));
    makefib();
    int n, m;
    int a[100005], b[100005];
    long long int ans = 1;
    cin >> n >> m;
    for (int i = 0; i < m; i++) cin >> a[i + 1];
    a[0] = -1;
    a[m + 1] = n + 1;
    for (int i = 0; i < m + 1; i++) {
        b[i] = a[i + 1] - a[i] - 2;
    }
    if (m > 0 && *min_element(b + 1, b + m) == -1)
        ans = 0;
    else {
        for (int i = 0; i < m + 1; i++) {
            ans *= fib[b[i] + 1];
            ans %= MOD;
        }
    }
    cout << ans << endl;
}