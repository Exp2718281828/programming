#include <bits/stdc++.h>
using namespace std;

int digittop(long long int n, int d = 10) {
    assert(d > 1);
    while (1) {
        if (n < 10) return n;
        n /= 10;
    }
}

int main() {
    int n;
    cin >> n;
    int c[10][10] = {};
    for (int i = 0; i < n; i++) {
        c[digittop(i + 1)][(i + 1) % 10]++;
    }
    int ans = 0;
    for (int i = 1; i < 10; i++)
        for (int j = 1; j < 10; j++) ans += c[i][j] * c[j][i];
    cout << ans << endl;
}