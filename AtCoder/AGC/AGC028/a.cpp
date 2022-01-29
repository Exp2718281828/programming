#include <bits/stdc++.h>
using namespace std;

long long GCD(long long n, long long m) {
    return m ? GCD(m, n % m) : n;
}

int main() {
    long long n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    long long g = GCD(n, m);
    long long res = n / g * m;
    n /= g, m /= g;
    bool ok = true;
    for (long long i = 0; i < g; ++i) {
        if (s[i * n] != t[i * m]) ok = false;
    }
    if (ok)
        cout << res << endl;
    else
        cout << -1 << endl;
}