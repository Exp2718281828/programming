#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans[2][100005];
    tuple<int, int, int> a[100005];
    for (int i = 0; i < m; i++) {
        int p, y;
        cin >> p >> y;
        a[i] = make_tuple(y, p, i);
        ans[0][i] = p;
    }
    sort(a, a + m);
    int cnt[100005] = {};
    for (int i = 0; i < m; i++) {
        cnt[get<1>(a[i])]++;
        ans[1][get<2>(a[i])] = cnt[get<1>(a[i])];
    }
    for (int i = 0; i < m; i++) {
        stringstream ss;
        ss << setw(6) << setfill('0') << ans[0][i] << setw(6) << setfill('0') << ans[1][i];
        cout << ss.str() << endl;
    }
}