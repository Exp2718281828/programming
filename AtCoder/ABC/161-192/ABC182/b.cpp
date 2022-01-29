#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[103];
    cin >> n;
    int gmax = 0, ans = 2;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 2; i <= 1000; i++) {
        int g = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] % i == 0) g++;
        }
        if (gmax < g) {
            gmax = g;
            ans = i;
        }
    }
    cout << ans << endl;
}