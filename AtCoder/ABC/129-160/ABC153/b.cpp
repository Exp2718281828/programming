#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, n, s = 0;
    cin >> h >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s += a;
    }
    if (h <= s)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}