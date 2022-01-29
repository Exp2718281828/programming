#include <bits/stdc++.h>
using namespace std;

long long enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            if (N / i != i) res.push_back(N / i);
        }
    }
    sort(res.begin(), res.end());
    return res.size();
}

int main() {
    long long int n;
    cin >> n;
    long long int ans = 0;
    while (n % 2 == 0) n /= 2;
    ans = enum_divisors(n);
    ans *= 2;
    cout << ans << endl;
}
