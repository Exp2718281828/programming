#include <bits/stdc++.h>
using namespace std;

bool check(int x, bool d[]) {
    int ans = true;
    while (x > 0) {
        if (d[x % 10] == false) return false;
        x /= 10;
    }
    return true;
}

int main() {
    int n, k;
    bool d[10];
    memset(d, 1, sizeof(d));
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;
        d[a] = false;
    }
    for (int i = n;; i++) {
        if (check(i, d)) {
            cout << i << endl;
            return 0;
        }
    }
}