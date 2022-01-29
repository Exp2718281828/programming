#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int x, long long int y) {
    if (x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}

int main() {
    int n;
    cin >> n;
    long long int s = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                s += gcd(i, gcd(j, k));
            }
        }
    }
    cout << s << endl;
}