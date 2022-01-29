#include <iostream>
using namespace std;

int main() {
    int n, x, ans = 0;
    while (1) {
        cin >> n >> x;
        if (n == 0 && x == 0) break;
        ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                for (int k = j + 1; k <= n; k++) {
                    if ((i + j + k) == x) ans++;
                }
            }
        }
        cout << ans << endl;
    }
}