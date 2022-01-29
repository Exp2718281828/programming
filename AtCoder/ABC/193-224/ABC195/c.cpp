#include <bits/stdc++.h>
using namespace std;

const long long int A = 1000000000000000;
const long long int B = 1000000000000;
const long long int C = 1000000000;
const long long int D = 1000000;
const long long int E = 1000;

int main() {
    long long int n;
    cin >> n;
    long long int ans = 0;
    if (n >= A) ans += n - A + 1;
    if (n >= B) ans += n - B + 1;
    if (n >= C) ans += n - C + 1;
    if (n >= D) ans += n - D + 1;
    if (n >= E) ans += n - E + 1;
    cout << ans << endl;
}