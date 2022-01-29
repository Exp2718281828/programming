#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int x[200005], y[200005], w[200005], z[200005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    for (int i = 0; i < n; i++) {
        w[i] = x[i] + y[i];
        z[i] = x[i] - y[i];
    }
    cout << max(*max_element(w, w + n) - *min_element(w, w + n), *max_element(z, z + n) - *min_element(z, z + n)) << endl;
}