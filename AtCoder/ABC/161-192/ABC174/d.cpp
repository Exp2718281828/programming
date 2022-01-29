#include <bits/stdc++.h>
using namespace std;

const int INF = 100000000;

int main() {
    int n;
    string c;
    cin >> n >> c;
    int r_l = 0, r_r = 0, w_l = 0, w_r = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] == 'R')
            r_r++;
        else
            r_l++;
    }
    int ans = INF;
    for (int i = 0; i < n + 1; i++) {
        ans = min(ans, max(w_l, r_r));
        if (i != n) {
            if (c[i] == 'R') {
                r_r--;
                r_l++;
            } else {
                w_r--;
                w_l++;
            }
        }
    }
    cout << ans << endl;
}