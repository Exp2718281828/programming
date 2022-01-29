#include <bits/stdc++.h>
using namespace std;

int N;

int char2int(char c) {
    assert(c >= '0' && c <= '9');
    return c - '0';
}

int digitnum(long long int n, int d = 10) {
    assert(d > 1);
    int ans = 0;
    while (1) {
        n /= d;
        ans++;
        if (n == 0) return ans;
    }
}

bool is753(int n) {
    string m;
    m = to_string(n);
    bool c[10] = {};
    for (int i = 0; i < m.length(); i++) {
        if (!(m[i] == '3' || m[i] == '5' || m[i] == '7')) {
            return false;
        } else {
            c[char2int(m[i])] = true;
        }
    }
    if (c[3] && c[5] && c[7])
        return true;
    else
        return false;
}

int dp(long long int m) {
    int ans = 0;
    if (digitnum(m) <= digitnum(N)) {
        if (is753(m)) ans++;
    }
    int lastdigit[3] = {3, 5, 7};
    for (int i = 0; i < 3; i++) {
        if (10 * m + lastdigit[i] <= N) ans += dp(10 * m + lastdigit[i]);
    }
    return ans;
}

int main() {
    cin >> N;
    cout << dp(0) << endl;
}