#include <bits/stdc++.h>
using namespace std;

const int INF = 100000000;

int main() {
    int n, m, p;
    pair<int, int> w[55];
    int x[55];
    int q[2][55];
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++) cin >> w[i].second >> w[i].first;
    for (int i = 0; i < m; i++) cin >> x[i];
    for (int i = 0; i < p; i++) cin >> q[0][i] >> q[1][i];
    for (int i = 0; i < n; i++) {
        w[i].first *= -1;
        w[i].second *= -1;
    }
    sort(w, w + n);
    for (int i = 0; i < n; i++) {
        w[i].first *= -1;
        w[i].second *= -1;
    }
    for (int i = 0; i < p; i++) {
        int ans = 0;
        int successcount = 0;
        int xtemp[55];
        for (int k = 0; k < m; k++) xtemp[k] = x[k];
        for (int j = 0; j < n; j++) {
            if (successcount >= min(m - (q[1][i] - q[0][i] + 1), n)) break;
            int placesize = INF, placeindex = -1;
            for (int k = 0; k < m; k++) {
                if (k >= q[0][i] - 1 && k <= q[1][i] - 1) continue;
                if (xtemp[k] < w[j].second) continue;
                if (placesize <= xtemp[k]) continue;
                placesize = x[k];
                placeindex = k;
            }
            if (placeindex == -1) continue;
            ans += w[j].first;
            xtemp[placeindex] = -1;
            successcount++;
        }
        cout << ans << endl;
    }
}