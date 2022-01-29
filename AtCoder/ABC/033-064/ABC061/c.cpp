#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k;
    long long int a[100006] = {};
    int ans = -1;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a[x] += y;
    }
    for (int i = 1; i <= 100005; i++) {
        k -= a[i];
        if (k <= 0) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}