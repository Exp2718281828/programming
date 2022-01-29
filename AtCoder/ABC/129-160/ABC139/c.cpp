#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0, nowh, nowans = 0;
    cin >> n >> nowh;
    for (int i = 1; i < n; i++) {
        int h;
        cin >> h;
        if (h > nowh) {
            ans = max(ans, nowans);
            nowans = 0;
        } else {
            nowans++;
        }
        nowh = h;
    }
    ans = max(ans, nowans);
    cout << ans << endl;
}