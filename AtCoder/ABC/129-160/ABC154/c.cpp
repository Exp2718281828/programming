#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[200005];
    bool ans = true;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) ans = false;
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}