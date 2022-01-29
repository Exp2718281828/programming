#include <bits/stdc++.h>
using namespace std;

int char2int(char c) {
    assert(c >= '0' && c <= '9');
    return c - '0';
}

int getscore(int a[]) {
    int ans = 0;
    for (int i = 1; i < 10; i++) {
        ans += i * pow(10, count(a, a + 5, i));
    }
    return ans;
}

int main() {
    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;
    double ans = 0;
    int l[10];
    int u[5], v[5];
    for (int i = 0; i < 10; i++) l[i] = k;
    for (int i = 0; i < 4; i++) {
        l[char2int(s[i])]--;
        l[char2int(t[i])]--;
        u[i] = char2int(s[i]);
        v[i] = char2int(t[i]);
    }
    sort(u, u + 4);
    sort(v, v + 4);
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (i == j) {
                if (l[i] <= 1) continue;
            } else {
                if (l[i] == 0 || l[j] == 0) continue;
            }
            u[4] = i;
            v[4] = j;
            if (getscore(u) > getscore(v)) {
                if (i == j) {
                    ans += (l[i] / (double)(9 * k - 8)) * ((l[i] - 1) / (double)(9 * k - 9));
                } else {
                    ans += (l[i] / (double)(9 * k - 8)) * (l[j] / (double)(9 * k - 9));
                }
            }
        }
    }
    printf("%.16f\n", ans);
}