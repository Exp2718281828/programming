#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        bool flag = true;
        int a = i, b = i;
        while (a > 0) {
            if (a % 10 == 7) {
                flag = false;
                break;
            }
            a /= 10;
        }
        while (b > 0) {
            if (b % 8 == 7) {
                flag = false;
                break;
            }
            b /= 8;
        }
        if (flag) ans++;
    }
    cout << ans << endl;
}