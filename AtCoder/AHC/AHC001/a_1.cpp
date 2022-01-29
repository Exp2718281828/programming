#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    tuple<int, int, int, int> x[205];
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        x[i] = make_tuple(a, b, c, i);
    }
    sort(x, x + n);
    int nowx = 0;
    int ans[2][205];
    for (int i = 0; i < n; i++) {
        ans[0][get<3>(x[i])] = nowx;
        int dx = (get<2>(x[i]) + 9999) / 10000;
        nowx += dx;
        if (nowx <= 10000) {
            ans[1][get<3>(x[i])] = nowx;
        } else {
            nowx = 10000;
            ans[1][get<3>(x[i])] = nowx;
            for (int j = i;; j--) {
                if (ans[0][get<3>(x[j])] >= ans[1][get<3>(x[j])]) {
                    ans[0][get<3>(x[j])] = ans[1][get<3>(x[j])] - 1;
                    ans[1][get<3>(x[j - 1])] = ans[0][get<3>(x[j])];
                } else {
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[0][i] << ' ' << 0 << ' ' << ans[1][i] << ' ' << 10000 << endl;
        assert(ans[0][i] != ans[1][i]);
    }
}