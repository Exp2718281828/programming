#include <bits/stdc++.h>
using namespace std;
const int INF = 100000000;

int main() {
    int n;
    int x[105];
    cin >> n;
    int ans = INF;
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 1; i <= 100; i++) {
        int s = 0;
        for (int j = 0; j < n; j++) {
            s += pow(x[j] - i, 2);
        }
        ans = min(ans, s);
    }
    cout << ans << endl;
}