#include <bits/stdc++.h>
using namespace std;

const long long int MOD = 1000000007;

int main() {
    long long int ans = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ans *= 10;
        ans %= MOD;
    }
    long long int sum = 1;
    for (int i = 0; i < n; i++) {
        sum *= 8;
        sum %= MOD;
    }
    ans += sum;
    sum = 1;
    for (int i = 0; i < n; i++) {
        sum *= 9;
        sum %= MOD;
    }
    ans -= sum * 2;
    cout << (ans + 3 * MOD) % MOD << endl;
}