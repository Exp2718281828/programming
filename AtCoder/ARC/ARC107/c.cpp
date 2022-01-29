#include <iostream>
using namespace std;

int main() {
    int n, k;
    long long int ans = 0;
    cin >> n >> k;
    for (int x = 2; x <= 2 * n; x++) {
        int y = x - k;
        if (y < 2) continue;
        if (y > 2 * n) break;
        int l, m;
        if (x <= n)
            l = x - 1;
        else
            l = 2 * n + 1 - x;
        if (y <= n)
            m = y - 1;
        else
            m = 2 * n + 1 - y;
        long long int z = (long long)l * m;
        ans += z;
    }
    cout << ans << endl;
}