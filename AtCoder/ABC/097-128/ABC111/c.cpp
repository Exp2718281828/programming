#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100005], b[100005], n;
    cin >> n;
    n /= 2;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    vector<pair<int, int>> p;
    int anow = a[0];
    int cnta = 1;
    for (int i = 1; i < n; i++) {
        if (anow == a[i]) {
            cnta++;
        } else {
            p.push_back(make_pair(cnta, a[i - 1]));
            anow = a[i];
            cnta = 1;
        }
    }
    p.push_back(make_pair(cnta, a[n - 1]));
    vector<pair<int, int>> q;
    int bnow = b[0];
    int cntb = 1;
    for (int i = 1; i < n; i++) {
        if (bnow == b[i]) {
            cntb++;
        } else {
            q.push_back(make_pair(cntb, b[i - 1]));
            bnow = b[i];
            cntb = 1;
        }
    }
    q.push_back(make_pair(cntb, b[n - 1]));
    sort(p.begin(), p.end(), greater<pair<int, int>>());
    sort(q.begin(), q.end(), greater<pair<int, int>>());
    p.push_back(make_pair(0, 0));
    q.push_back(make_pair(0, 0));
    if (p[0].second == q[0].second) {
        if (p[1].first > q[1].first) {
            cout << 2 * n - p[1].first - q[0].first << endl;
        } else {
            cout << 2 * n - q[1].first - p[0].first << endl;
        }
    } else {
        cout << 2 * n - p[0].first - q[0].first << endl;
    }
}