#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x;
    cin >> x;
    long long int m = 100;
    for (int i = 0;; i++) {
        m += m / 100;
        if (m >= x) {
            cout << i + 1 << endl;
            break;
        }
    }
}