#include <bits/stdc++.h>
using namespace std;

int n;
int dat[1 << 20];

void init(int N) {
    n = 1;
    while (n < N) n *= 2;
}

void update(int k, int x) {
    k += n - 1;
    dat[k] = x;
    while (k > 0) {
        k = (k - 1) / 2;
        dat[k] = dat[k * 2 + 1] ^ dat[k * 2 + 2];
    }
}

int query(int a, int b, int k, int l, int r) {
    if (r <= a || b <= l) return 0;
    if (a <= l && r <= b) return dat[k];
    int vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
    int vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
    return vl ^ vr;
}

int main() {
    int m, q, a[300005], t[3][300005];
    cin >> m >> q;
    init(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < q; i++)
        for (int j = 0; j < 3; j++) cin >> t[j][i];
    for (int i = 0; i < q; i++) {
        t[1][i]--;
        if (t[0][i] == 2) t[2][i]--;
    }
    for (int i = 0; i < m; i++) {
        update(i, a[i]);
    }
    for (int i = 0; i < q; i++) {
        if (t[0][i] == 1) {
            update(t[1][i], a[t[1][i]] ^ t[2][i]);
            a[t[1][i]] = a[t[1][i]] ^ t[2][i];
        } else {
            cout << query(t[1][i], t[2][i] + 1, 0, 0, n) << endl;
        }
    }
}