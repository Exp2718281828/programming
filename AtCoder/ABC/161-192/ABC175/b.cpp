#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l[105];
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> l[i];
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (abs(l[i] - l[j]) < l[k] && l[i] + l[j] > l[k] && l[i] != l[j] && l[j] != l[k] && l[k] != l[i]) ans++;
            }
        }
    }
    cout << ans << endl;
}