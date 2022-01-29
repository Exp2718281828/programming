#include <bits/stdc++.h>
using namespace std;

int prime_factorize(long long N) {
    if (N == 1) return 0;
    int s = 0;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        s += ex;
    }
    if (N != 1) s++;
    return s;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << prime_factorize(i + 1) + 1;
        if (i == n - 1)
            cout << endl;
        else
            cout << ' ';
    }
}