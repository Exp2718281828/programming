#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        n -= a;
    }
    cout << max(n, -1) << endl;
}