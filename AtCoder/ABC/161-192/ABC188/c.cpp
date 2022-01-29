#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    pair<int, int> a[100000];
    cin >> n;
    int m = pow(2, n);
    for (int i = 0; i < m; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + m);
    int k;
    if (a[m - 1].second < pow(2, n - 1))
        k = 0;
    else
        k = 1;
    for (int i = m - 2; i >= 0; i--) {
        if (k == 0) {
            if (a[i].second >= pow(2, n - 1)) {
                cout << a[i].second + 1 << endl;
                return 0;
            }
        } else {
            if (a[i].second < pow(2, n - 1)) {
                cout << a[i].second + 1 << endl;
                return 0;
            }
        }
    }
}