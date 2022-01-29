#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = -1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, p, x;
        cin >> a >> p >> x;
        if (a < x) {
            if (ans == -1)
                ans = p;
            else
                ans = min(ans, p);
        }
    }
    cout << ans << endl;
}