#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[205] = {};
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        m[a % 200]++;
    }
    long long int ans = 0;
    for (int i = 0; i < 200; i++) ans += (long long)m[i] * (m[i] - 1) / 2;
    cout << ans << endl;
}
