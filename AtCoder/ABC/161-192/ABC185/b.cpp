#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, m, t;
    bool c = true;
    cin >> n >> m >> t;
    int l = n, u = 0;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        l -= a - u;
        if (l <= 0) {
            c = false;
            break;
        }
        l = min(l + (b - a), n);
        u = b;
        if (i == m - 1) {
            if (t - b >= l) c = false;
        }
    }
    if (c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}