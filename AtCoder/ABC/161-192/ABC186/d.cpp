#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    long long int n, a[200005];
    long long int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        ans += a[i] * (-(n - 1) + 2 * i);
    }
    cout << ans << endl;
}