#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> p, q, r;
    cin >> n;
    int pd = 0, qd = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        p.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        r.push_back(i + 1);
    }
    int cnt = 1;
    do {
        for (int i = 0; i < n; i++) {
            if (p[i] != r[i]) break;
            if (i == n - 1) pd = cnt;
        }
        for (int i = 0; i < n; i++) {
            if (q[i] != r[i]) break;
            if (i == n - 1) qd = cnt;
        }
        if (pd * qd != 0) break;
        cnt++;
    } while (next_permutation(r.begin(), r.end()));
    cout << abs(pd - qd) << endl;
}