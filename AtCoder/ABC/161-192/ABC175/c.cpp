#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x, k, d;
    cin >> x >> k >> d;
    long long int ans;
    x = abs(x);
    if (d < (double)x / k)
        ans = x - k * d;
    else {
        k -= x / d;
        x -= x / d * d;
        if (k % 2 == 0)
            ans = x;
        else
            ans = x - d;
    }
    ans = abs(ans);
    cout << ans << endl;
}