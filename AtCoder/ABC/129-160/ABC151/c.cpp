#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int s[100005] = {};
    int a[100005] = {};
    for (int i = 0; i < m; i++) {
        int p;
        string t;
        cin >> p >> t;
        if (t == "AC") {
            a[p - 1] = 1;
        } else {
            if (a[p - 1] == 0) {
                s[p - 1]++;
            }
        }
    }
    int b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) b += s[i];
        c += a[i];
    }
    cout << c << ' ' << b << endl;
}