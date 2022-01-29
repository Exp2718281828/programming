#include <bits/stdc++.h>
using namespace std;

int char2int(char c) {
    assert(c >= '0' && c <= '9');
    return c - '0';
}

int maxdigit(string n) {
    int ans = 0;
    for (int i = 0; i < n.length(); i++) {
        ans = max(ans, char2int(n[i]));
    }
    return ans;
}

/*__int128 intpow(long long int n, int r) {
    __int128 ans = 1;
    for (int i = 0; i < r; i++) {
        ans *= n;
    }
    return ans;
}*/

__int128 intpow(__int128 a, __int128 n) {
    if (n == 0) return 1;
    if (n == 1) return a;
    if (n % 2 == 1) return (a * intpow(a, n - 1));
    __int128 t = intpow(a, n / 2);
    return (t * t);
}

int main() {
    string x;
    long long int ma;
    cin >> x >> ma;
    __int128 m = ma;
    int ans = 0;
    bool flag = true;
    int beginnum;
    ans = beginnum - maxdigit(x);
    for (int i = beginnum;; i++) {
        if (intpow(i, x.length() + 1) > m) {
            __int128 s = 0;
            for (int j = x.length() - 1; j >= 0; j--) {
                s += char2int(x[x.length() - j - 1]) * intpow(i, j);
                if (s > m) flag = false;
            }
        }
        if (flag) {
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;
}