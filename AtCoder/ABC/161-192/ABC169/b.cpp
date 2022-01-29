#include <bits/stdc++.h>
using namespace std;

const long long int MAX = 1000000000000000000;

int main() {
    int n;
    __int128 ans = 1;
    long long int a[100005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    if (*min_element(a, a + n) == 0) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        ans *= a[i];
        if (ans > MAX) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << (long long)ans << endl;
}