#include <iostream>
using namespace std;

int main() {
    int a[1005][2];
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i][0] >> a[i][1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            double k = (double)(a[i][1] - a[j][1]) / (a[i][0] - a[j][0]);
            if (k <= 1 && k >= -1) ans++;
        }
    }
    cout << ans << endl;
}