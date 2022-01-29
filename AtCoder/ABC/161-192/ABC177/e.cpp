#include <bits/stdc++.h>
using namespace std;

int p[1000005] = {};

long long int gcd(long long int x, long long int y) {
    if (x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}

bool divisors(long long n) {
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            p[i]++;
            if (p[i] > 1 && i > 1) return true;
            if (n / i != i) {
                p[n / i]++;
                if (p[n / i] > 1 && n / i > 1) return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    int a[1000005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int g = a[0];
    for (int i = 1; i < n; i++) g = gcd(g, a[i]);
    if (g > 1) {
        cout << "not coprime" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (divisors(a[i])) {
            cout << "setwise coprime" << endl;
            return 0;
        }
    }
    if (*max_element(p + 2, p + 1000000) <= 1)
        cout << "pairwise coprime" << endl;
    else
        cout << "setwise coprime" << endl;
}