#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int x, long long int y) {
    if (x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}

vector<pair<long long, long long>> factorize(long long N) {
    vector<pair<long long, long long>> res;
    for (long long a = 2; a * a <= N; a++) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ex++;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    long long int a, b;
    cin >> a >> b;
    long long int g = gcd(a, b);
    cout << factorize(g).size() + 1 << endl;
}