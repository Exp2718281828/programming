#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a = 1;
    for (int i = 0; i < n; i++) {
        if (a + k < 2 * a)
            a += k;
        else
            a *= 2;
    }
    cout << a << endl;
}