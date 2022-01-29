#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, a, b;
    cin >> n >> a >> b;
    long long int ans;
    ans = n / (a + b) * a;
    ans += min(a, n - n / (a + b) * (a + b));
    cout << ans << endl;
}