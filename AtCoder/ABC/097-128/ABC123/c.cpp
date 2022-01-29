#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, a[5];
    cin >> n >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    sort(a, a + 5);
    long long int ans = (n + a[0] - 1) / (a[0]) + 4;
    cout << ans << endl;
}