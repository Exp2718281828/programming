#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2 == 1) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    cout << (a + b) / 2 << endl;
}