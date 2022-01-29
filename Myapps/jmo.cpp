#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int x, long long int y) {
    if (x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}

int jmofunction(long long int n) {
    for (int i = 1; i < n; i++) {
        if (gcd(n + 1, i + 1) == 1) return i;
    }
    return -1;
}

int main() {
    long long int n;
    set<long long int> ans1;
    for (long long int i = 1; i <= 10000000000; i++) {
        ans1.insert(jmofunction(i));
        if (i % 10000000 == 0) cout << '#' << i / 10000000 << endl;
    }
    cout << ans1.size() << endl;
}