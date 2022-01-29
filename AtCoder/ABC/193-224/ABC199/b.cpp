#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a = max(a, x);
    }
    int b = 1005;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b = min(b, x);
    }
    cout << max(0, b - a + 1) << endl;
}