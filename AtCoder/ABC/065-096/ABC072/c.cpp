#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[100005];
    memset(a, 0, sizeof(a));
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k > 0) a[k - 1]++;
        a[k]++;
        a[k + 1]++;
    }
    int ans = *max_element(a, a + 100005);
    cout << ans << endl;
}