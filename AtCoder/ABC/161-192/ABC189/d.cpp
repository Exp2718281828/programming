#include <bits/stdc++.h>
using namespace std;


long long intpow(long long int n, int r) {
    long long int ans = 1;
    for (int i = 0; i < r; i++) {
        ans *= n;
    }
    return ans;
}

int main() {
    int n;
    int s[65];
    cin >> n;
    for (int i = 0; i < n; i++) {
        string k;
        cin >> k;
        s[i] = k == "AND" ? 0 : 1;
    }
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += s[i] * intpow(2, i + 1);
    }
    ans += 1;
    cout << ans << endl;
}