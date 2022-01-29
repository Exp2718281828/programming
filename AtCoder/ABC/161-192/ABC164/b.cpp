#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans;
    while (1) {
        c -= b;
        if (c <= 0) {
            ans = 0;
            break;
        }
        a -= d;
        if (a <= 0) {
            ans = 1;
            break;
        }
    }
    if (ans == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}