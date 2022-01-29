#include <bits/stdc++.h>
using namespace std;

const int INF = 100000000;

int main() {
    int n;
    cin >> n;
    pair<int, int> t[1005];
    for (int i = 0; i < n; i++) cin >> t[i].first >> t[i].second;
    int ans = INF;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                ans = min(ans, t[i].first + t[j].second);
            } else {
                ans = min(ans, max(t[i].first, t[j].second));
            }
        }
    }
    cout << ans << endl;
}