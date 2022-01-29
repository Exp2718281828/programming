#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[200005];
    long long int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<int>());
    ans = a[0];
    for (int i = 2; i < n; i++) ans += a[i / 2];
    cout << ans << endl;
}