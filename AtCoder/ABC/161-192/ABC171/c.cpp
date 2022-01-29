#include <bits/stdc++.h>
using namespace std;

long long intpow(long long int n, int r) {
    long long int ans = 1;
    for (int i = 0; i < r; i++) {
        ans *= n;
    }
    return ans;
}

char nthletter(int n) {
    char c = 'a';
    c = c - 1 + n;
    return c;
}

int main() {
    long long int n;
    cin >> n;
    for (int i = 11; i >= 0; i--) {
        if (n <= 26 * (intpow(26, i) - 1) / 25) continue;
        if (i == 0) {
            int a = n % 26 == 0 ? 26 : n % 26;
            cout << nthletter(a) << endl;
        } else {
            long long int m = n - 26 * (intpow(26, i) - 1) / 25 - 1;
            long long int a = m / intpow(26, i);
            a++;
            a = a % 26 == 0 ? 26 : a % 26;
            cout << nthletter(a);
        }
    }
}