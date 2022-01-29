#include <bits/stdc++.h>
using namespace std;

vector<long long> divisors(long long n) {
    vector<long long> res;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            if (n / i != i) res.push_back(n / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    long long int n;
    cin >> n;
    vector<long long> a;
    a = divisors(n);
    for (int i = 0; i < a.size(); i++) cout << a[i] << endl;
}