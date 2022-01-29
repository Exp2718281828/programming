#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int ans;
    for (int i = 1;; i++) {
        x -= i;
        if (x <= 0) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}